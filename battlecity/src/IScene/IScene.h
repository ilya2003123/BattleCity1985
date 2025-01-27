#pragma once

#include "SFML/Graphics.hpp"
#include "../ISprite/ISprite.h"
#include "../AnimSprite/AnimSprite/AnimSprite.h"
#include <vector>

class IScene : public sf::Drawable
{
public:
	IScene() = default;
	IScene(const IScene& other) = delete;
	IScene(IScene&& other) noexcept = default;
	IScene& operator=(const IScene& other) = delete;
	IScene& operator=(IScene&& other) noexcept = default;
	~IScene() = default;

	void addISprite(ISprite* sprite);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time& frameTime);

private:
	std::vector<ISprite*> m_sprites;
};