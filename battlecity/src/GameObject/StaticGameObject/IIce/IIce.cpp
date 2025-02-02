#include "IIce.h"

IIce::IIce(float x, float y)
	: m_x(x), m_y(y), m_animSprite(dataForStaticGameObject(), new StaticObjectController())
{
	m_animSprite.setPosition(x, y);
	m_animSprite.setState("static");
}

void IIce::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_animSprite, states);
}

void IIce ::update(sf::Event& event, sf::Time frameTime)
{
	m_animSprite.update(event, frameTime);
}

std::map<std::string, Animation> IIce::dataForStaticGameObject()
{
	return resource::createDynamic(utils::PATH_TO_ICE, utils::frameStatic);
}
