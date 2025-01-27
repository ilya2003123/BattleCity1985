#pragma once

#include "IAnimController.h"
#include "functional"

class AnimLambdaController : public IAnimController
{
public:
	using Callback = std::function<MoveData(EventData&, AnimData&)>;

	AnimLambdaController() = delete;
	AnimLambdaController(Callback callback);
	AnimLambdaController(const AnimLambdaController& other) = default;
	AnimLambdaController(AnimLambdaController&& other) noexcept = default;
	AnimLambdaController& operator=(const AnimLambdaController& other) = default;
	AnimLambdaController& operator=(AnimLambdaController&& other) noexcept = default;
	virtual ~AnimLambdaController() = default;

	MoveData update(EventData& data, AnimData& anim) override;

private:
	Callback m_callback;
};