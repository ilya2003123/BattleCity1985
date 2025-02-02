#include "IBrickWall.h"

IBrickWall::IBrickWall(float x, float y)
	: m_x(x), m_y(y), m_animSprite(dataForStaticGameObject(), new StaticObjectController())
{
	m_animSprite.setPosition(x, y);
	m_animSprite.setState("static");
}

void IBrickWall::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_animSprite, states);
}

void IBrickWall::update(sf::Event& event, sf::Time frameTime)
{
	m_animSprite.update(event, frameTime);
}

std::map<std::string, Animation> IBrickWall::dataForStaticGameObject()
{
	return resource::createDynamic(utils::PATH_TO_BRICK_WALL, utils::frameStatic);
}
