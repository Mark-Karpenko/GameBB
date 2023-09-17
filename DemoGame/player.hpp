#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:

	Player();

	void render();
	void Collision(Level level);

	void tick(float dt);
	void gravity(float dt);

private:
	bool Collided = false;

	int posX;
	int posY;

	sf::FloatRect singleCord;
	sf::Vector2f previousPos;
	sf::Vector2f newPos;
	sf::Vector2f deltaPos;

	bool moveUp = true;
	bool moveDown = true;

	bool moveLeft = true;
	bool moveRight = true;
};

