#pragma once

#include "AbstractWindow.h"
#include "../IScene/IScene.h"
#include "../IRenderEngine/RenderSFML.h"
#include "../Resource_Loader/Resource_Loader.h"
#include "../DataLoad/DataLoad.h"
#include "../AnimController/AnimWaterController.h"

#pragma warning(push, 0)
#include <string>
#include <SFML/Graphics.hpp>
#pragma warning(pop)

class Window : public AbstractWindow
{
public:
	Window() = delete;
	Window(IRenderEngine& engine) noexcept;
	Window(const Window& other) = delete;
	Window(Window&& other) noexcept = default;
	Window& operator=(const Window& other) = delete;
	Window& operator=(Window&& other) noexcept = default;
	virtual ~Window() = default;

	virtual void draw() override;
	virtual void update() override;

private:
	IRenderEngine& m_engine;
	IScene m_scene;
};