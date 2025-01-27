#include"Resource_Loader.h"

Resource_Loader::Resource_Loader(std::string path)
{
	std::ifstream file(path);
	if (!file.is_open())
	{
		std::cerr << "Can't open file: " + path << std::endl;
	}
	else
	{
		if (!m_texture.loadFromFile(path))
		{
			std::cerr << "Can't load texture: " + path << std::endl;
		}
	};
};

sf::Texture Resource_Loader::getTexture()
{
	return m_texture;
}