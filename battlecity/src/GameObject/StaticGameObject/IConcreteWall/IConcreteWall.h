#pragma once
#include "/github/battlecity/BattleCity1985/battlecity/src/GameObject\StaticGameObject/StaticGameObject.h"
#include "../../../DataLoad/DataLoad.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class IConcreteWall : public StaticGameObject
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
	virtual std::string dataForStaticGameObject() override;

private:
	AnimSprite m_animSprite;
};
