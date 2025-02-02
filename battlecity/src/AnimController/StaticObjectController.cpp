#include "StaticObjectController.h"

StaticObjectController::StaticObjectController()
{
	m_callback = [](EventData& data, AnimData& anim)
		{
			const float SPEED = 0.0f;
			anim.currentAnimation = &anim.animations["static"];
			return MoveData({ 0, 0 }, false, SPEED);
		};
}

StaticObjectController::StaticObjectController(Callback callback)
{
	m_callback = callback;
}

MoveData StaticObjectController::update(EventData& data, AnimData& anim)
{
	return m_callback(data, anim);
}