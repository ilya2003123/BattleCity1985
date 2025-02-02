#pragma once
#include "/github/battlecity/BattleCity1985/battlecity/src/GameObject/DynamicGameObject/DynamicGameObject.h"
#include "../../../AnimController/AnimTankController.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class ITank : public DynamicGameObject
{
public:
	ITank() = delete;
	ITank(float x, float y);
	virtual ~ITank() = default;
	ITank(const ITank& other) = delete;
	ITank(const ITank&& other) = delete;
	ITank& operator=(const ITank& other) = delete;
	ITank& operator=(ITank&& other) = delete;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;
	void TankControl(sf::Event& event, sf::Time frameTime);
	std::map<std::string, Animation> dataForDynamicGameObject() override;

private:
	const float SPEED = 2.0f; 
	float m_x = 0.0f, m_y = 0.0f;
	float m_vx = 0.0f, m_vy = 0.0f;
	float m_speed = 0.0f;
	int m_control = 0;
	AnimSprite m_animSprite;
	bool m_isRestart = 0;
	sf::Keyboard::Key m_keyPressed = sf::Keyboard::Unknown;
};
