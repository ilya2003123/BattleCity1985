#pragma once
#include "../StaticGameObject.h"
#include "../../../DataLoad/DataLoad.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class ITree : public StaticGameObject
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
	std::string dataForStaticGameObject() override;;

private:
	AnimSprite m_animSprite;
};
