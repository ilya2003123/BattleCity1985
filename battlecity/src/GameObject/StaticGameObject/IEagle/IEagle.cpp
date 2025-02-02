#include "IEagle.h"

IEagle::IEagle(float x, float y)
	: m_x(x), m_y(y), m_animSprite(dataForStaticGameObject(), new StaticObjectController())
{
	m_animSprite.setPosition(x, y);
	m_animSprite.setState("static");
}

void IEagle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_animSprite, states);
}

void IEagle::update(sf::Event& event, sf::Time frameTime)
{
	m_animSprite.update(event, frameTime);
}

std::map<std::string, Animation> IEagle::dataForStaticGameObject()
{
	return resource::createDynamic(utils::PATH_TO_EAGLE, utils::frameStatic);
}
