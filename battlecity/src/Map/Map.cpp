#include"Map.h"  

void Map::createMap(const std::string& path, IScene& m_scene, const int& DEEP)
{
    if (DEEP == 0)
    {
        return;
    }
	std::ifstream file(path);
	if (!file.is_open())
	{
		utils::print("Can't open file: " + path);
	}
    std::string currentLine;
    int rowNumber = 0; 
    while (std::getline(file, currentLine)) 
    {
        for (int columnNumber = 0; columnNumber < currentLine.size(); columnNumber++) {
            const int X = columnNumber  * 80;
            const int Y = rowNumber * 80;
            if (DEEP == 3)
            {
                switch (currentLine[columnNumber])
                {
                case '8': m_scene.addISprite(new IConcreteWall(X, Y)); break;
                case '=': m_scene.addISprite(new IWater(X, Y)); break;
                case '#': m_scene.addISprite(new IBrickWall(X, Y)); break;
                case '%': m_scene.addISprite(new IEagle(X, Y)); break;
                }
            }
            else if (DEEP == 2)
            {
                switch (currentLine[columnNumber])
                {
                    case '1': m_scene.addISprite(new ITank(X, Y)); break;
                }
            }
            else if (DEEP == 1)
            {
                switch (currentLine[columnNumber])
                {
                    case '*': m_scene.addISprite(new ITree(X, Y)); break;
                }
            }
        }
        rowNumber++;
    }
    file.close();

    createMap(path, m_scene, DEEP - 1);
}
