#pragma once 

#include <SFML/Graphics.hpp>

class Collided
{

public:

	Collided();
	sf::FloatRect singleCord;
	std::vector < sf::FloatRect > arrCord;

	float posX;
	float posY;

	int speed;

	bool moveX;
	bool moveY;

};

