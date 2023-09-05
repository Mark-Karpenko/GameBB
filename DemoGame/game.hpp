#pragma once

#include <SFML/Graphics.hpp>
#include "collisionManager.hpp"
#include "level.hpp"
#include "player.hpp"

class Game
{
public:

	static Game& getInstance()
	{
		static Game game;
		return game;
	}

	~Game();

	void run();
	void exit();
	void draw(const sf::Shape& shape);

private:
	Game();
	Game(const Game& onterGame);
	Game& operator=(const Game& otherGame);

	void tick(float dt);
	void render();
	void handleEvent(const sf::Event& event);

	// Initialization class
private:
	sf::RenderWindow main_window;

	Level level;
	Player player;
	CollisionManager collisionM;
};