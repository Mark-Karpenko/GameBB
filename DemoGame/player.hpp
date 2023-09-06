#pragma once

#include <SFML/Graphics.hpp>
#include "collided.hpp"

class Player :public Collided
{
public:

	Player();

	void render();

	void tick(float dt);
	void gravity(float dt);

	int speed;
	bool onGround = false;


private:

	float posX;
	float posY;

};

