#pragma once

#include"SFML/Graphics.hpp"

class ISprite : public sf::Transformable, public sf::Drawable
{
public:
	ISprite() = default;
	~ISprite() = default;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override = 0;
	virtual void update(sf::Event& event, sf::Time frameTime) = 0;	
};