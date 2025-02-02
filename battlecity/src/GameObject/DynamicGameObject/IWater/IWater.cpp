#include "IWater.h"

IWater::IWater(float x, float y)
	: m_x(x), m_y(y), m_animSprite(dataForDynamicGameObject(), new AnimWaterController())
{
	m_animSprite.setPosition(x, y);
	m_animSprite.setState("flow");
}
void IWater::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_animSprite, states);
}

void IWater::update(sf::Event& event, sf::Time frameTime)
{
	m_animSprite.update(event, frameTime);
}

std::map<std::string, Animation> IWater::dataForDynamicGameObject()
{
	return resource::createDynamic(utils::PATH_TO_WATER, utils::framesWater);
}
