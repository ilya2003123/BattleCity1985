#pragma once

#include <iostream>
#include <functional>
#include <SFML/Graphics.hpp>
#include "../AnimTools/Animated.h"
#include "../../AnimController/IAnimController.h"
#include "../../AnimController/AnimMockController.h"
#include "../../ISprite/ISprite.h"
#include "../../AnimController/AnimLambdaController.h"

class AnimSprite : public ISprite
{
public:
	AnimSprite() = delete;
	AnimSprite(const std::map<std::string, Animation>& animations,
		IAnimController* controller = new AnimMockController(),
		const sf::Time = sf::seconds(0.2), bool pause = true, bool repeat = false);
	virtual ~AnimSprite() = default;

	void setState(const std::string& nameState);
	void setController(IAnimController* controller);
	void setController(std::function<MoveData(EventData&, AnimData&)> controller);
	void update(sf::Event event, sf::Time frameTime);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	std::map<std::string, Animation> m_animations;
	Animation* m_currentAnimation = nullptr;
	AnimatedSprite m_animatedSprite;
	IAnimController* m_currController;
};