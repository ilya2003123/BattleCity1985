#include "AnimTankController.h"

AnimTankController::AnimTankController()
{
	m_callback = [&](EventData& data, AnimData& anim)
		{
			const bool isMovingLeft = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
			const bool isMovingUp = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
			const bool isMovingDown = sf::Keyboard::isKeyPressed(sf::Keyboard::S);
			const bool isMovingRight = sf::Keyboard::isKeyPressed(sf::Keyboard::D);

			sf::Keyboard::Key keyReleased = sf::Keyboard::Unknown;
			if (data.event.type == sf::Event::KeyReleased) keyReleased = data.event.key.code;
			if (keyReleased == m_keyPressed) m_keyPressed = sf::Keyboard::Unknown;

			bool noKeyPressed = true;
			const float SPEED = 80.0f;

			if (isMovingLeft && (m_keyPressed == sf::Keyboard::A || m_keyPressed == sf::Keyboard::Unknown))
			{
				anim.currentAnimation = &anim.animations["left"];
				noKeyPressed = false;
				m_keyPressed = sf::Keyboard::A;
			}
			if (isMovingUp && (m_keyPressed == sf::Keyboard::W || m_keyPressed == sf::Keyboard::Unknown))
			{
				anim.currentAnimation = &anim.animations["up"];
				noKeyPressed = false;
				m_keyPressed = sf::Keyboard::W;
			}
			if (isMovingDown && (m_keyPressed == sf::Keyboard::S || m_keyPressed == sf::Keyboard::Unknown))
			{
				anim.currentAnimation = &anim.animations["down"];
				noKeyPressed = false;
				m_keyPressed = sf::Keyboard::S;
			}
			if (isMovingRight && (m_keyPressed == sf::Keyboard::D || m_keyPressed == sf::Keyboard::Unknown))
			{
				anim.currentAnimation = &anim.animations["right"];
				noKeyPressed = false;
				m_keyPressed = sf::Keyboard::D;
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
