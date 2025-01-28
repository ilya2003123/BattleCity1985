#pragma once

#include <fstream>
#include <sstream>
#include "SFML/Graphics.hpp"
#include "../Settings.h"

class Atlas
{
	public:
		Atlas() = default;
		Atlas(const Atlas& other) = delete;
		Atlas(Atlas&& other) noexcept = delete;
		Atlas& operator=(const Atlas& other) = delete;
		Atlas& operator=(Atlas&& other) noexcept = delete;
		~Atlas() = default;
		static std::vector<sf::IntRect> createIntRect(const std::string& path);
};

