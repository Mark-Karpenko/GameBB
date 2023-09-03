#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:

	sf::FloatRect palyerCord;

	Player();

	void fall();
	void render();
	void tick();

	bool collision(sf::FloatRect playrCord, std::vector<sf::FloatRect> itemCord);
	void move();

private:

	int posX;
	int posY;



};

