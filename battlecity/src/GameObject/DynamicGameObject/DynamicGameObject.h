#pragma once
#include "SFML/Graphics.hpp"
#include "../AbstractGameObject.h"     

class DynamicGameObject : public AbstractGameObject
{
public:
	DynamicGameObject() = default;
	DynamicGameObject(const DynamicGameObject& other) = delete;
	DynamicGameObject(const DynamicGameObject&& other) = delete;
	DynamicGameObject& operator=(const DynamicGameObject& other) = delete;
	DynamicGameObject& operator=(DynamicGameObject&& other) = delete;
	virtual ~DynamicGameObject() = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override {};
	void update(sf::Event& event, sf::Time frameTime) override {};
	virtual std::map<std::string, Animation> dataForDynamicGameObject() = 0;
};