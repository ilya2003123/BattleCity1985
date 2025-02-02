#pragma once
#include "../StaticGameObject.h"
#include "../../../DataLoad/DataLoad.h"
#include "../../../AnimController/StaticObjectController.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class IIce : public StaticGameObject
{
public:
	IIce() = delete;
	IIce(float x, float y);
	virtual ~IIce() = default;
	IIce(const IIce& other) = delete;
	IIce(const IIce&& other) = delete;
	IIce& operator=(const IIce& other) = delete;
	IIce& operator=(IIce&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;
	std::map<std::string, Animation> dataForStaticGameObject() override;

private:
	float m_x = 0.0f, m_y = 0.0f;
	float m_vx = 0.0f, m_vy = 0.0f;
	AnimSprite m_animSprite;
};
