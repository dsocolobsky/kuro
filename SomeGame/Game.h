#pragma once

#include <SFML/Graphics.hpp>
#include <map>
#include "ScreenManager.h"

class Game
{
public:
	Game(int width, int height, std::string title);

	void run();
private:
	sf::RenderWindow window;
	ScreenManager screenManager;
};

