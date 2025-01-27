#include"Atlas.h"

std::vector<sf::IntRect> Atlas::createIntRect(std::string path)
{
    std::ifstream file(path);                                                     
    if (!file.is_open())                                                           
    {
        utils::print("Can't open file: " + path);
    }
    std::vector<int> numbers;                                                    
    std::string line;                                                              
    std::vector<sf::IntRect> vectorIntRect;
    while (std::getline(file, line))                                      
    {
        std::istringstream stream(line);                                  
        int num;
        while (stream >> num)
        {
            numbers.push_back(num);                                            
        }
    }
    file.close();
    for (int x = 1; x <= numbers.size(); x++)
    {
        if (x % 4 == 0)
        {
             vectorIntRect.push_back(sf::IntRect({ numbers[x-4], numbers[x-3] }, { numbers[x-2], numbers[x-1] }));
        }
    }
    return vectorIntRect;
}
