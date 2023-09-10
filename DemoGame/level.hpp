#pragma once 

#include <SFML/Graphics.hpp>

#include "collided.hpp"
#include "fstream"
#include "vector"

class Level: public Collided
{

public:
	Level();

	void ReadMap(const std::string filename);

	void render();

private:

	std::vector<std::vector<char>> levelMap;

};