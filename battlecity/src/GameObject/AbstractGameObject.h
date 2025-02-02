#pragma once
#include "SFML/Graphics.hpp"
#include "../ISprite/ISprite.h"
#include "../DataLoad/DataLoad.h"
#include "../Settings.h"

class AbstractGameObject : public ISprite
{
public:
	AbstractGameObject() = default;
	AbstractGameObject(const AbstractGameObject& other) = delete;
	AbstractGameObject(const AbstractGameObject&& other) = delete;
	AbstractGameObject& operator=(const AbstractGameObject& other) = delete;
	AbstractGameObject& operator=(AbstractGameObject&& other) = delete;
	virtual ~AbstractGameObject() = default;

	void draw() override {};
	void update() override {};

};