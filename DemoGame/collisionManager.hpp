#pragma once 

#include <SFML/Graphics.hpp>

#include "level.hpp"
#include "player.hpp"


class CollisionManager
{

public:

	CollisionManager();

	void collisionPaW(Player player, Level level);

};
