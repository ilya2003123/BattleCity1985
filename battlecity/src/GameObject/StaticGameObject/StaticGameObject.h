#pragma once
#include "SFML/Graphics.hpp"
#include "../AbstractGameObject.h"     

class StaticGameObject : public AbstractGameObject
{
public:
	StaticGameObject() = default;
	StaticGameObject(const StaticGameObject& other) = delete;
	StaticGameObject(const StaticGameObject&& other) = delete;
	StaticGameObject& operator=(const StaticGameObject& other) = delete;
	StaticGameObject& operator=(StaticGameObject&& other) = delete;
	virtual ~StaticGameObject() = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override {};
	void update(sf::Event& event, sf::Time frameTime) override {};
	virtual std::map<std::string, Animation> dataForStaticGameObject() = 0;
};
