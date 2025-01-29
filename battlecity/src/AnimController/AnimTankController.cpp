#include "AnimTankController.h"

AnimTankController::AnimTankController()
{
	m_callback = [](EventData& data, AnimData& anim)
		{
			bool noKeyPressed = true;
			const float SPEED = 80.0f;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			{
				anim.currentAnimation = &anim.animations["left"];
				noKeyPressed = false;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				anim.currentAnimation = &anim.animations["up"];
				noKeyPressed = false;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				anim.currentAnimation = &anim.animations["down"];
				noKeyPressed = false;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				anim.currentAnimation = &anim.animations["right"];
				noKeyPressed = false;
			}
			return MoveData({ 0, 0 }, noKeyPressed, SPEED);
		};
}

AnimTankController::AnimTankController(Callback callback)
{
	m_callback = callback;
}

MoveData AnimTankController::update(EventData& data, AnimData& anim)
{
	return m_callback(data, anim);
}
