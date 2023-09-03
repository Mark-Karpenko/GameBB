#include <SFML/Graphics.hpp>

#include "game.hpp"
#include "Player.hpp"
#include "level.hpp"
#include "setting.hpp"

#include "iostream"

Player::Player()
	:posX(setting::WINDOW_WIDTH / 2), posY(setting::WINDOW_HEIGHT / 2)
{
	
}

void Player::fall()
{
	posY += setting::GRAVITY;
}

void Player::tick()
{

	posY += setting::GRAVITY;

}


bool Player::collision(sf::FloatRect playrCord, std::vector<sf::FloatRect> itemCord)
{
	//  Rework
	for (int i = 0; i < itemCord.size(); i++)
	{
		if (playrCord.intersects(itemCord[i]))
		{
			std::cout << "#";
			return false;
			break;
		}

	}
}

void Player::render()

{
	sf::RectangleShape mainPlayer;
	mainPlayer.setSize(sf::Vector2f(setting::BLOCK_WIDTH, setting::BLOCK_HEIGHT * 2));
	mainPlayer.setFillColor(sf::Color::White);

	mainPlayer.setPosition(sf::Vector2f(posX, posY));

	palyerCord = mainPlayer.getGlobalBounds();

	Game::getInstance().draw(mainPlayer);

}
