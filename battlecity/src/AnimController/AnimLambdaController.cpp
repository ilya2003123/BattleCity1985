#include"AnimLambdaController.h"

AnimLambdaController::AnimLambdaController(Callback callback)
	: m_callback(callback)
{
}

MoveData AnimLambdaController::update(EventData& data, AnimData& anim)
{
	return m_callback(data, anim);
}
