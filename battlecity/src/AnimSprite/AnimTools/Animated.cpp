#include "Animated.h"

Animation Tools::generateAnimation(const sf::Texture textureAtlas, std::vector<sf::IntRect> rectFrames)
{
	Animation animation;
	animation.setSpriteSheet(textureAtlas);

	for (const auto& it : rectFrames)
	{
		animation.addFrame(it);
	}

	return animation;
}

AnimatedSprite Tools::generateAnimatedSprite(sf::Time frameTime, bool pause, bool repeat)
{
	return AnimatedSprite(frameTime, pause, repeat);
}
