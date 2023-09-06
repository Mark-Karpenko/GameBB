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

void CollisionManager::collisionPaW(Collided firstE, Collided secondE)
{
	for (int i = 0; i < secondE.arrCord.size(); i++)
	{
		if (firstE.singleCord.intersects(secondE.arrCord[i]))
		{
			std::cout << "1";
		}
	}
}