#include "ITank.h"

ITank::ITank(float x, float y)
	: m_x(x), m_y(y), m_animSprite(resource::dataForYellowTank(), new AnimTankController())
{
	m_animSprite.setPosition(x, y);
	m_animSprite.setState("up");
}

std::map < std::string, Animation> ITank::dataForDynamicGameObject()
{
	return resource::create(utils::PATH_TO_YELLOW_TANK_1, utils::framesTank);
}

void ITank::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_animSprite, states);
}

void ITank::update(sf::Event& event, sf::Time frameTime)
{
	m_animSprite.update(event, frameTime);

	TankControl(event, frameTime);
	switch (m_control)
	{
	case 0:
		m_vx = -m_speed;
		m_vy = 0;
		break;
	case 1:
		m_vy = -m_speed;
		m_vx = 0;
		break;
	case 2:
		m_vy = m_speed;
		m_vx = 0;
		break;
	case 3:
		m_vx = m_speed;
		m_vy = 0;
		break;
	}
	m_x = m_vx * frameTime.asSeconds();
	m_y = m_vy * frameTime.asSeconds();
	m_speed = 0;
	if (m_isRestart) m_animSprite.move(m_vx, m_vy);
}

void ITank::TankControl(sf::Event& event, sf::Time frameTime)
{
	if (frameTime.asSeconds() > 0) m_isRestart = 1;
	else m_isRestart = 0;

	const bool isMovingLeft = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
	const bool isMovingUp = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
	const bool isMovingDown = sf::Keyboard::isKeyPressed(sf::Keyboard::S);
	const bool isMovingRight = sf::Keyboard::isKeyPressed(sf::Keyboard::D);

	sf::Keyboard::Key keyReleased = sf::Keyboard::Unknown;
	if (event.type == sf::Event::KeyReleased) keyReleased = event.key.code;
	if (keyReleased == m_keyPressed) m_keyPressed = sf::Keyboard::Unknown;

	if (isMovingLeft && (m_keyPressed == sf::Keyboard::A || m_keyPressed == sf::Keyboard::Unknown))
	{
		m_control = 0;
		m_speed = SPEED;
		m_keyPressed = sf::Keyboard::A;
	}
	if (isMovingUp && (m_keyPressed == sf::Keyboard::W || m_keyPressed == sf::Keyboard::Unknown))
	{
		m_control = 1;
		m_speed = SPEED;
		m_keyPressed = sf::Keyboard::W;
	}
	if (isMovingDown && (m_keyPressed == sf::Keyboard::S || m_keyPressed == sf::Keyboard::Unknown))
	{
		m_control = 2;
		m_speed = SPEED;
		m_keyPressed = sf::Keyboard::S;
	}
	if (isMovingRight && (m_keyPressed == sf::Keyboard::D || m_keyPressed == sf::Keyboard::Unknown))
	{
		m_control = 3;
		m_speed = SPEED;
		m_keyPressed = sf::Keyboard::D;
	}
}
