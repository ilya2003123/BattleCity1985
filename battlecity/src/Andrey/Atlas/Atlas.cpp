#include"Atlas.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "SFML/Graphics.hpp"


std::vector<sf::IntRect> Atlas::createIntRect(std::string path)
{
    std::ifstream file(path);                                                       // Открываем файл для чтения
    if (!file.is_open())                                                           // Проверяем, что файл открылся успешно
    {
        std::cerr << "Ошибка при открытии файла: " + path << std::endl;
    }
    std::vector<int> numbers;                                                      // Массив для хранения чисел
    std::string line;                                                              // Строка для чтения каждой строки из файла
    std::vector<sf::IntRect> vectorIntRect;
    while (std::getline(file, line))                                               // Чтение файла построчно
    {
        std::istringstream stream(line);                                           // Создаём строковый поток для обработки каждой строки
        int num;
        while (stream >> num)
        {
            numbers.push_back(num);                                                // Добавляем число в вектор
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
