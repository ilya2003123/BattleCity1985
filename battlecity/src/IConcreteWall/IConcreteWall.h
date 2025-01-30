#pragma once
//#include "../AbstractGameObject/AbstractGameObject.h"
#include "../DataLoad/DataLoad.h"
#include "../ISprite/ISprite.h"
#include "../AnimController/AnimWaterController.h"
#include "../AnimSprite/AnimSprite/AnimSprite.h"

class IConcreteWall : public ISprite
{
public:
	IConcreteWall() = delete;
	virtual ~IConcreteWall() = default;
	IConcreteWall(const IConcreteWall& other) = delete;
	IConcreteWall(const IConcreteWall&& other) = delete;
	IConcreteWall& operator=(const IConcreteWall& other) = delete;
	IConcreteWall& operator=(IConcreteWall&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;

private:
	AnimSprite m_animSprite;
};
