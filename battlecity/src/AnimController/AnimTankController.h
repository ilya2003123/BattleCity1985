#pragma once
#include "IAnimController.h"
#include <functional>
#include "../ITank/ITank.h"

class AnimTankController : public IAnimController
{
public:
	using Callback = std::function<MoveData(EventData&, AnimData&)>;

	AnimTankController();
	AnimTankController(Callback callback);
	AnimTankController(const AnimTankController& other) = default;
	AnimTankController(AnimTankController&& other) noexcept = default;
	AnimTankController& operator=(const AnimTankController& other) = default;
	AnimTankController& operator=(AnimTankController&& other) noexcept = default;
	virtual ~AnimTankController() = default;

	MoveData update(EventData& data, AnimData& anim) override;

private:
	Callback m_callback;
	sf::Keyboard::Key m_keyPressed = sf::Keyboard::Unknown;
};