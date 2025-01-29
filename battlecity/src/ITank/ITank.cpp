#include "ITank.h"

ITank::ITank(float x, float y)
	: m_x(x), m_y(y), m_animSprite(resource::dataForYellowTank(), new AnimTankController())
{
	m_animSprite.setPosition(x, y);
	m_animSprite.setState("move");
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
	default:
		m_vx = 0;
		m_vy = 0;
		break;
	}
	m_x = m_vx * frameTime.asSeconds();
	m_y = m_vy * frameTime.asSeconds();
	m_speed = 0;
	m_animSprite.move(m_vx, m_vy);
}

void ITank::TankControl(sf::Event& event, sf::Time frameTime)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		m_control = 0;
		m_speed = SPEED;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		m_control = 1;
		m_speed = SPEED;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		m_control = 2;
		m_speed = SPEED;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		m_control = 3;
		m_speed = SPEED;
	}
}
