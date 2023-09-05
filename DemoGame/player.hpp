#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:

	Player();

	sf::FloatRect palyerCord;

	void render();

	void tick(float dt);
	void gravity(float dt);

	int speed;
	bool onGround = false;


private:

	float posX;
	float posY;

};

