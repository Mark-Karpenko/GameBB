#include <SFML/Graphics.hpp>

#include "game.hpp"
#include "Player.hpp"
#include "level.hpp"
#include "setting.hpp"

#include "iostream"

Player::Player()
	:posX(setting::WINDOW_WIDTH/2),posY(setting::WINDOW_HEIGHT/2)
{
	
}


void Player::tick(float dt)
{

    previousPos = sf::Vector2f(posX, posY);

	//Control
	//Left
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		posX -= setting::PLAYER_SPEED * dt;
	}

	//Right
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{

		posX += setting::PLAYER_SPEED * dt;

	}

	//Up
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{

		posY -= setting::PLAYER_SPEED * dt;

	}

	//Down
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{

		posY += setting::PLAYER_SPEED * dt;

	}
}

void Player::Collision(Level level)
{
    newPos = sf::Vector2f(posX, posY);

    for (int i = 0; i < level.arrCord.size(); i++)
    {
        if (singleCord.intersects(level.arrCord[i]))
        {
            
            deltaPos = newPos - previousPos;

            // Right
            if (deltaPos.x < 0)
            {
                newPos.x = previousPos.x;
            }
            // Left
            else if (deltaPos.x > 0)
            {
                newPos.x = previousPos.x;
            }

            // Up
            if (deltaPos.y < 0)
            {
                newPos.y = previousPos.y;
            }
            // Down
            else if (deltaPos.y > 0)
            {
                newPos.y = previousPos.y;
            }
        }
    }

    // Обновите позицию игрока
    posX = newPos.x;
    posY = newPos.y;

    // Обновите предыдущую позицию
    previousPos = sf::Vector2f(posX, posY);
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
