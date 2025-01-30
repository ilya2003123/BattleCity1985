#pragma once
//#include "../AbstractGameObject/AbstractGameObject.h"
#include "../DataLoad/DataLoad.h"
#include "../ISprite/ISprite.h"
#include "../AnimSprite/AnimSprite/AnimSprite.h"

class IEagle : public ISprite
{
public:
	IEagle() = delete;
	IEagle(float x, float y);
	virtual ~IEagle() = default;
	IEagle(const IEagle& other) = delete;
	IEagle(const IEagle&& other) = delete;
	IEagle& operator=(const IEagle& other) = delete;
	IEagle& operator=(IEagle&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;

private:
	float m_x = 0.0f, m_y = 0.0f;
	float m_vx = 0.0f, m_vy = 0.0f;
	AnimSprite m_animSprite;
};
