#pragma once

#include "IAnimController.h"
#include <functional>

class AnimWaterController : public IAnimController
{
public:
	using Callback = std::function<MoveData(EventData&, AnimData&)>;

	AnimWaterController();
	AnimWaterController(Callback callback);
	AnimWaterController(const AnimWaterController& other) = default;
	AnimWaterController(AnimWaterController&& other) noexcept = default;
	AnimWaterController& operator=(const AnimWaterController& other) = default;
	AnimWaterController& operator=(AnimWaterController&& other) noexcept = default;
	virtual ~AnimWaterController() = default;

	MoveData update(EventData& data, AnimData& anim) override;

private:
	Callback m_callback;
};