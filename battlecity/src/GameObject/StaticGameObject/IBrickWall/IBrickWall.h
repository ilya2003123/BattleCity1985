#pragma once
#include "../StaticGameObject.h"
#include "../../../DataLoad/DataLoad.h"
#include "../../../AnimController/StaticObjectController.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class IBrickWall : public StaticGameObject
{
public:
	IBrickWall() = delete;
	IBrickWall(float x, float y);
	virtual ~IBrickWall() = default;
	IBrickWall(const IBrickWall& other) = delete;
	IBrickWall(const IBrickWall&& other) = delete;
	IBrickWall& operator=(const IBrickWall& other) = delete;
	IBrickWall& operator=(IBrickWall&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;
	std::map<std::string, Animation> dataForStaticGameObject() override;

private:
	float m_x = 0.0f, m_y = 0.0f;
	float m_vx = 0.0f, m_vy = 0.0f;
	AnimSprite m_animSprite;
};
