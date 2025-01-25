#pragma once

#include <iostream>
#include <fstream>
#include "SFML/Graphics.hpp"
#include "../../Settings.h"

class Resource_Loader
{
public:
	Resource_Loader(std::string path);
	sf::Texture getTexture();
private:
	sf::Texture m_texture;
};