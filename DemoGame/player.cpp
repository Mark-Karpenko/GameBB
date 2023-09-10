#include <SFML/Graphics.hpp>

#include "game.hpp"
#include "Player.hpp"
#include "level.hpp"
#include "setting.hpp"

#include "iostream"

Player::Player()
{
	
}


void Player::tick(float dt)
{




	//Control

	//Left
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		posX -= speed * dt;
	}

	//Right
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{

		posX += speed * dt;

	}

	//Up
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{

		posY -= speed * dt;

	}

	//Down
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{

		posY += speed * dt;

	}
}

void Player::render()

{
	sf::RectangleShape mainPlayer;
	mainPlayer.setSize(sf::Vector2f(setting::BLOCK_WIDTH, setting::BLOCK_HEIGHT * 2));
	mainPlayer.setFillColor(sf::Color::White);

	mainPlayer.setPosition(sf::Vector2f(posX, posY));

	singleCord = mainPlayer.getGlobalBounds();

	Game::getInstance().draw(mainPlayer);

}
