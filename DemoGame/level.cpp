
#include "setting.hpp"
#include "level.hpp"
#include "game.hpp"

#include <iostream>
#include <vector>

Level::Level()
{
    std::cout << " Class level " << std::endl;
}

void Level::render()
{
    sf::RectangleShape block;

    block.setSize(sf::Vector2f(setting::BLOCK_WIDTH, setting::BLOCK_HEIGHT));
    block.setFillColor(setting::BLOCK_COLOR);

    for (int i = 0; i < levelMap.size(); ++i)
    {
        for (int j = 0; j < levelMap[j].size(); ++j)
        {
            if (levelMap[i][j] == '1')
            {

               block.setPosition(sf::Vector2f(0 + i * setting::BLOCK_WIDTH, 0 + j * setting::BLOCK_HEIGHT));

               arrCord.push_back(block.getGlobalBounds());

               Game::getInstance().draw(block);
            }

        }
    }
}