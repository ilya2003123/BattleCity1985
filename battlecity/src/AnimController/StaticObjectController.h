#pragma once

#include "IAnimController.h"
#include <functional>
#include "../GameObject/StaticGameObject/IBrickWall/IBrickWall.h"
#include "../GameObject/StaticGameObject/IConcreteWall/IConcreteWall.h"
#include "../GameObject/StaticGameObject/IIce/IIce.h"
#include "../GameObject/StaticGameObject/ITree/ITree.h"
#include "../GameObject/StaticGameObject/IEagle/IEagle.h"

class StaticObjectController : public IAnimController
{
public:
	using Callback = std::function<MoveData(EventData&, AnimData&)>;

	StaticObjectController();
	StaticObjectController(Callback callback);
	StaticObjectController(const StaticObjectController& other) = default;
	StaticObjectController(StaticObjectController&& other) noexcept = default;
	StaticObjectController& operator=(const StaticObjectController& other) = default;
	StaticObjectController& operator=(StaticObjectController&& other) noexcept = default;
	virtual ~StaticObjectController() = default;

	MoveData update(EventData& data, AnimData& anim) override;

private:
	Callback m_callback;
};