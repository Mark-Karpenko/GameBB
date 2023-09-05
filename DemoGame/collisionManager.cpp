#include <SFML/Graphics.hpp>

#include "collisionManager.hpp"
#include "level.hpp"
#include "player.hpp"
#include "setting.hpp"
#include "iostream"

CollisionManager::CollisionManager()
{

}

void CollisionManager::collisionPaW(Player player, Level level)
{
	for (int i = player.palyerCord.top / setting::BLOCK_HEIGHT; i < (player.palyerCord.top + player.palyerCord.height) / setting::BLOCK_HEIGHT; i++)
	{
		for (int j = player.palyerCord.left / setting::BLOCK_WIDTH; j < (player.palyerCord.left + player.palyerCord.width) / setting::BLOCK_WIDTH; j++)
		{

			if (level.levelMap[i][j] == '1')
			{
				std::cout << "1" << " " << player.palyerCord.top + player.palyerCord.height;

				//Need realize

			}

		}
	}
}