#include "AnimWaterController.h"

AnimWaterController::AnimWaterController()
{
	m_callback = [](EventData& data, AnimData& anim)
		{
			const float SPEED = 0.0f;
			anim.currentAnimation = &anim.animations["flow"];
			return MoveData({ 0, 0 }, false, SPEED);
		};
}

AnimWaterController::AnimWaterController(Callback callback)
{
	m_callback = callback;
}

MoveData AnimWaterController::update(EventData& data, AnimData& anim)
{
	return m_callback(data, anim);
}
