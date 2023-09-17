#pragma once 

#include <SFML/Graphics.hpp>


#include "fstream"
#include "vector"

class Level
{

public:
	Level();

	void ReadMap(const std::string filename);

	void render();

private:

	std::vector<std::vector<char>> levelMap;

public:

	std::vector < sf::FloatRect > arrCord;
};