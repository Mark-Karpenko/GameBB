#include <SFML/Graphics.hpp>

#include "game.hpp"
#include "Player.hpp"
#include "level.hpp"
#include "setting.hpp"

#include "iostream"

Player::Player()
	:posX(setting::WINDOW_WIDTH / 2), posY(setting::WINDOW_HEIGHT / 2)
	,speed(setting::PLAYER_SPEED)
{
	
}


void Player::tick(float dt)
{




	//Control
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{

		posY -= speed * dt;
		posX += speed * dt;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{

		posY -= speed * dt;
		posX -= speed * dt;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{

		posY += speed * dt;
		posX += speed * dt;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{

		posY += speed * dt;
		posX -= speed * dt;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{

		posX -= speed*dt;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{

		posX += speed*dt;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{

		posY -= speed * dt;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
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
