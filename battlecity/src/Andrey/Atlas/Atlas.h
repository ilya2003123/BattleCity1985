#pragma once
#include "../../Settings.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "SFML/Graphics.hpp"
class Atlas
{
	public:
		std::vector<sf::IntRect>  createIntRect(std::string path);
};

