
#include <SFML/Graphics.hpp>

#include "collisionManager.hpp"
#include "level.hpp"
#include "player.hpp"
#include "setting.hpp"
#include "game.hpp"


Game::Game()
	:main_window({ setting::WINDOW_WIDTH, setting::WINDOW_HEIGHT }, "Platformer")
{


}

Game::~Game()
{

}

void Game::run()
{
	sf::Clock clock;
	while (main_window.isOpen())
	{

		sf::Event event;
		while (main_window.pollEvent(event))
		{
			handleEvent(event);
		}

		sf::Time elapsed = clock.restart();
		tick(elapsed.asSeconds());
		main_window.setFramerateLimit(60);

		main_window.clear(setting::WINDOW_BACKGROUND);
		render();
		main_window.display();

	}
}

void Game::exit()
{

	main_window.close();

}

void Game::draw(const sf::Shape& shape)
{

	main_window.draw(shape);

}

void Game::tick(float dt)
{

	collisionM.collisionPaW(player, level);
	player.tick(dt);

}

void Game::render()
{

	level.render();
	player.render();

}

void Game::handleEvent(const sf::Event& event)
{

	switch (event.type)
	{

	case sf::Event::Closed:exit();
		break;

	}

}

