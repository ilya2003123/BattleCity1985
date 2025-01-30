#pragma once
//#include "../AbstractGameObject/AbstractGameObject.h"
#include "../DataLoad/DataLoad.h"
#include "../ISprite/ISprite.h"
#include "../AnimController/AnimWaterController.h"
#include "../AnimSprite/AnimSprite/AnimSprite.h"

class ITree : public ISprite
{
public:
	ITree() = delete;
	virtual ~ITree() = default;
	ITree(const ITree& other) = delete;
	ITree(const ITree&& other) = delete;
	ITree& operator=(const ITree& other) = delete;
	ITree& operator=(ITree&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;

private:
	AnimSprite m_animSprite;
};
