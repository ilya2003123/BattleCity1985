#pragma once

#include <fstream>
#include "SFML/Graphics.hpp"
#include "../Settings.h"

class Resource_Loader
{
public:
	Resource_Loader() = default;
	Resource_Loader(const Resource_Loader& other) = delete;
	Resource_Loader(Resource_Loader&& other) noexcept = delete;
	Resource_Loader& operator=(const Resource_Loader& other) = delete;
	Resource_Loader& operator=(Resource_Loader&& other) noexcept = delete;
	virtual ~Resource_Loader() = default;
	Resource_Loader(std::string path);

	sf::Texture getTexture();

private:
	sf::Texture m_texture;
};