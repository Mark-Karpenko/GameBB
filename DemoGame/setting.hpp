#pragma once 

#include <SFML/Graphics.hpp>

namespace setting
{
	//Window
	constexpr int WINDOW_HEIGHT = 600;
	constexpr int WINDOW_WIDTH = 800;
	const sf::Color WINDOW_BACKGROUND(sf::Color::Black);

	//Block
	constexpr int BLOCK_HEIGHT = 30;
	constexpr int BLOCK_WIDTH = 40;
	const sf::Color BLOCK_COLOR(sf::Color::Green);
	
	//Player
	constexpr int PLAYER_SPEED = 80;


}
