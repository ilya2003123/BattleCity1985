#pragma once
#include <fstream>
#include <sstream>
#include "../IScene/IScene.h"
#include "../IRenderEngine/RenderSFML.h"
#include "../GameObject/AbstractGameObject.h"
#include "SFML/Graphics.hpp"
#include "../AnimController/AnimWaterController.h"
#include "../AnimController/StaticObjectController.h"
#include "../AnimController/AnimTankController.h"
#include "../Settings.h"

class Map
{
public:
	Map() = default;
	Map(const Map& other) = delete;
	Map(Map&& other) noexcept = delete;
	Map& operator=(const Map& other) = delete;
	Map& operator=(Map&& other) noexcept = delete;
	~Map() = default;
	static std::vector<std::string> createMap(const std::string& path, IScene& m_scene);
private:
	IRenderEngine& m_engine;
	IScene m_scene;
};

