#pragma once 

#include <SFML/Graphics.hpp>

namespace setting
{
	//Window
	constexpr int WINDOW_HEIGHT = 600;
	constexpr int WINDOW_WIDTH = 800;
	const sf::Color WINDOW_BACKGROUND(sf::Color::Black);

	//Block
	constexpr int BLOCK_HEIGHT = 40;
	constexpr int BLOCK_WIDTH = 30;
	const sf::Color BLOCK_COLOR(sf::Color::Green);

	//World
	constexpr int GRAVITY = 3;
	constexpr int GRAVITY_ON_GROUND = 3;
	
	//Player
	constexpr int SPEED = 100;
	constexpr int JUMP_FORCE=100;

}
