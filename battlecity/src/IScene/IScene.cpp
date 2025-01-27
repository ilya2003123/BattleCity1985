#include "IScene.h"

void IScene::addISprite(ISprite* sprite)
{
	m_sprites.push_back(sprite);
}

void IScene::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	for (const auto& sprite : m_sprites)
	{
		target.draw(*sprite, states);
	}
}

void IScene::update(sf::Event& event, sf::Time& frameTime)
{
	for (const auto& sprite : m_sprites)
	{
		sprite->update(event, frameTime);
	}
}
