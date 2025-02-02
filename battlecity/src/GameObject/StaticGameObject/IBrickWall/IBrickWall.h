#pragma once
#include "../StaticGameObject.h"
#include "../../../DataLoad/DataLoad.h"
#include "../../../ISprite/ISprite.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class IBrickWall : public StaticGameObject
{
public:
	IBrickWall() = delete;
	virtual ~IBrickWall() = default;
	IBrickWall(const IBrickWall& other) = delete;
	IBrickWall(const IBrickWall&& other) = delete;
	IBrickWall& operator=(const IBrickWall& other) = delete;
	IBrickWall& operator=(IBrickWall&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;

private:
	AnimSprite m_animSprite;
};
