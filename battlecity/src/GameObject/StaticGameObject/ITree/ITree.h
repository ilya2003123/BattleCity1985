#pragma once
#include "../StaticGameObject.h"
#include "../../../DataLoad/DataLoad.h"
#include "../../../AnimController/StaticObjectController.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class ITree : public StaticGameObject
{
public:
	ITree() = delete;
	ITree(float x, float y);
	virtual ~ITree() = default;
	ITree(const ITree& other) = delete;
	ITree(const ITree&& other) = delete;
	ITree& operator=(const ITree& other) = delete;
	ITree& operator=(ITree&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;
	std::map<std::string, Animation> dataForStaticGameObject() override;

private:
	float m_x = 0.0f, m_y = 0.0f;
	float m_vx = 0.0f, m_vy = 0.0f;
	AnimSprite m_animSprite;
};
