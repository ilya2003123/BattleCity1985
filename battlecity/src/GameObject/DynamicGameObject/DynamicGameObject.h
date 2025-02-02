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

	void draw() override {};
	void update() override {};
	virtual std::map<std::string, Animation> dataForDynamicGameObject() = 0;
};