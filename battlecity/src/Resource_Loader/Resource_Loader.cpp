#include"Resource_Loader.h"

Resource_Loader::Resource_Loader(const std::string& path)
{
	std::ifstream file(path);
	if (!file.is_open())
	{
		utils::print("Can't open file: " + path);
	}
	else
	{
		if (!m_texture.loadFromFile(path))
		{
			utils::print("Can't open file: " + path);
		}
	};
};

const sf::Texture& Resource_Loader::getTexture() const
{
	return m_texture;
}