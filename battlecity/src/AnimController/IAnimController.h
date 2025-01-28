#pragma once

#include"../AnimSprite/AnimTools//Animated.h"
#include <SFML/Graphics.hpp>

struct EventData
{
	sf::Event& event;
	sf::Time frameTime;
};

struct AnimData
{
	std::map<std::string, Animation>& animations;
	Animation*& currentAnimation;
};

struct MoveData
{
	sf::Vector2f movement;
	bool noKeyPressed;
	float speedAnim = 80.0f;
};

class IAnimController
{
public:
	IAnimController() = default;
	virtual ~IAnimController() = default;

	virtual MoveData update(EventData& data, AnimData& anim) = 0;
};