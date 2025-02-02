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

	virtual void draw() = 0;
	virtual void update() = 0;
	virtual std::string dataForStaticGameObject() = 0;
};
