#pragma once
#include "../DynamicGameObject.h"
#include "../../../AnimController/AnimWaterController.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class IWater : public DynamicGameObject
{
public:
	IWater() = delete;
	IWater(float x, float y);
	virtual ~IWater() = default;
	IWater(const IWater& other) = delete;
	IWater(const IWater&& other) = delete;
	IWater& operator=(const IWater& other) = delete;
	IWater& operator=(IWater&& other) = delete;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;
	std::map<std::string, Animation> dataForDynamicGameObject() override;

private:
	float m_x = 0.0f, m_y = 0.0f;
	float m_vx = 0.0f, m_vy = 0.0f;
	AnimSprite m_animSprite;
};
