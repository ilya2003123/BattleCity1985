#include "AnimWaterController.h"

AnimWaterController::AnimWaterController()
{
	m_callback = [](EventData& data, AnimData& anim)
		{
			const float speed = 0;
			anim.currentAnimation = &anim.animations["flow"];
			return MoveData({ 0, 0 }, false, speed);
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
