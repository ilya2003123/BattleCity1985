#include "ITree.h"

void ITree::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_animSprite, states);
}

void ITree::update(sf::Event& event, sf::Time frameTime)
{
	m_animSprite.update(event, frameTime);
}
