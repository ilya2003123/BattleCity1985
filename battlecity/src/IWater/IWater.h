#pragma once
//#include "../AbstractGameObject/AbstractGameObject.h"
#include "../DataLoad/DataLoad.h"
#include "../ISprite/ISprite.h"
#include "../AnimController/AnimWaterController.h"
#include "../AnimSprite/AnimSprite/AnimSprite.h"

class IWater : public ISprite
{
public:
	IWater() = delete;
	IWater(float x, float y);
	virtual ~IWater() = default;
	IWater(const IWater& other) = delete;
	IWater(const IWater&& other) = delete;
	IWater& operator=(const IWater& other) = delete;
	IWater& operator=(IWater&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;

private:
	float m_x = 0.0f, m_y = 0.0f;
	float m_vx = 0.0f, m_vy = 0.0f;
	AnimSprite m_animSprite;
};
