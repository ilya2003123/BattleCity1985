#pragma once

#include "../IScene/IScene.h"
#include "SFML/Graphics.hpp"

class IRenderEngine
{
public:
	IRenderEngine() = default;
	IRenderEngine(const IRenderEngine& other) = delete;
	IRenderEngine(IRenderEngine&& other) noexcept = default;
	IRenderEngine& operator=(const IRenderEngine& other) = delete;
	IRenderEngine& operator=(IRenderEngine&& other) noexcept = default;
	virtual ~IRenderEngine() = default;
	
	virtual void draw(sf::Drawable& drawable) = 0;
	virtual void display() = 0;
	virtual void clear() = 0;
	virtual void update(IScene& scene) = 0;
};