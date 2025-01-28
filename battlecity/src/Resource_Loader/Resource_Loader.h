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

	Resource_Loader(const std::string& path);

	const sf::Texture& getTexture() const;

private:
	sf::Texture m_texture;
};