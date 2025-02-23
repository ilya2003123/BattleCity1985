#include"Map.h"

std::vector<std::string> Map::createMap(const std::string& path, IScene& m_scene)
{
	std::ifstream file(path);
	if (!file.is_open())
	{
		utils::print("Can't open file: " + path);
	}
    std::string currentLine;
    int rowNumber = 0;
    const int tileSize = 70; 

    while (std::getline(file, currentLine)) {
        for (int col = 0; col < currentLine.size(); col++) {
            const int x = col * tileSize;
            const int y = rowNumber * tileSize;

            switch (currentLine[col]) {
            case '#': m_scene.addISprite(new IConcreteWall(x, y)); break;
            case '=': m_scene.addISprite(new IWater(x, y)); break;
            case '8': m_scene.addISprite(new IBrickWall(x, y)); break;
            case '%': m_scene.addISprite(new IEagle(x, y)); break;
            case '1': m_scene.addISprite(new ITank(x, y)); break;
            case '/': m_scene.addISprite(new ITree(x, y)); break;
            case '0': break; 
            default:
                break;
            }
        }
        rowNumber++;
    }
    file.close();
	return std::vector<std::string>();
}
