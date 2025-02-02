#include "IEagle.h"

void IEagle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_animSprite, states);
}

void IEagle::update(sf::Event& event, sf::Time frameTime)
{
	m_animSprite.update(event, frameTime);
}
