#include <SFML/Graphics.hpp>

#include "collisionManager.hpp"
#include "level.hpp"
#include "player.hpp"
#include "setting.hpp"
#include "iostream"
#include "collided.hpp"

CollisionManager::CollisionManager()
{

}

void CollisionManager::collisionPaW(Collided &firstE, Collided &secondE)
{
	for (int i = 0; i < secondE.arrCord.size(); i++)
	{
		if (firstE.singleCord.intersects(secondE.arrCord[i]))
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			{
				if (firstE.singleCord.left+firstE.singleCord.width >= secondE.arrCord[i].left+secondE.arrCord[i].width)
				{
					firstE.posX = secondE.arrCord[i].left + secondE.arrCord[i].width;
				}
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				if (firstE.singleCord.left <= secondE.arrCord[i].left)
				{
					firstE.posX = secondE.arrCord[i].left - secondE.arrCord[i].width;
				}
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				if (firstE.singleCord.top>=secondE.arrCord[i].top-secondE.arrCord[i].height)
				{
					firstE.posY = secondE.arrCord[i].top + secondE.arrCord[i].height;
				}
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				if (firstE.singleCord.top <= secondE.arrCord[i].top - secondE.arrCord[i].height)
				{
					firstE.posY = secondE.arrCord[i].top - firstE.singleCord.height;
				}
			}

			
		}
	}
}