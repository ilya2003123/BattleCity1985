#pragma once

#include"IAnimController.h"

class AnimMockController : public IAnimController
{
public:
	AnimMockController() = default;
	AnimMockController(const AnimMockController& other) = default;
	AnimMockController(AnimMockController&& other) noexcept = default;
	AnimMockController& operator=(const AnimMockController& other) = default;
	AnimMockController& operator=(AnimMockController&& other) noexcept = default;
	~AnimMockController() = default;

	MoveData update(EventData& data, AnimData& anim) final {};
};