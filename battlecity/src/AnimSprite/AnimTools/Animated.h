#pragma once

#include<vector>
#include"../externalAnimSprite/Animation.h"
#include"../externalAnimSprite/AnimatedSprite.h"

namespace Tools
{
	Animation generateAnimation(const sf::Texture textureAtlas, std::vector<sf::IntRect> rectFrames);
	AnimatedSprite generateAnimatedSprite(sf::Time frameTime = sf::seconds(0.2), bool pause = true, bool repeat = false);
}


