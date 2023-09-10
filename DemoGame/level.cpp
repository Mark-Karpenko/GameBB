
#include "setting.hpp"
#include "level.hpp"
#include "game.hpp"

#include <iostream>
#include <vector>

Level::Level()
{

}

void Level::ReadMap(const std::string filename)
{
    std::ifstream file(filename);

    if (!file.is_open())
    {
        std::cout << "Error, can't open file" << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line))
    {

        std::vector<char> row;
        for (char i : line)
        {
            row.push_back(i);
        }
        levelMap.push_back(row);

    }

    file.close();
}

void Level::render()
{
    sf::RectangleShape block;

    block.setSize(sf::Vector2f(setting::BLOCK_WIDTH, setting::BLOCK_HEIGHT));
    block.setFillColor(setting::BLOCK_COLOR);

    for (int i = 0; i < levelMap.size(); ++i)
    {
        for (int j = 0; j < levelMap[i].size(); ++j)
        {
            if (levelMap[i][j] == '1')
            {

               block.setPosition(sf::Vector2f(0 + j * setting::BLOCK_WIDTH, 0 + i * setting::BLOCK_HEIGHT));

               arrCord.push_back(block.getGlobalBounds());

               Game::getInstance().draw(block);
            }

        }
    }
}