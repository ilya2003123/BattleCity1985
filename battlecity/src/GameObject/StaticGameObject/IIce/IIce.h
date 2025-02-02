#pragma once
#include "../StaticGameObject.h"
#include "../../../DataLoad/DataLoad.h"
#include "../../../AnimSprite/AnimSprite/AnimSprite.h"

class IIce : public StaticGameObject
{
public:
	IIce() = delete;
	virtual ~IIce() = default;
	IIce(const IIce& other) = delete;
	IIce(const IIce&& other) = delete;
	IIce& operator=(const IIce& other) = delete;
	IIce& operator=(IIce&& other) noexcept = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update(sf::Event& event, sf::Time frameTime) override;
	std::string dataForStaticGameObject() override;

private:
	AnimSprite m_animSprite;
};
