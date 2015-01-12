#pragma once

#include <SFML/Graphics.hpp>
#include "MenuScreen.h"
#include "GameScreen.h"

class Game
{
public:
	Game(int width, int height, std::string title);

	void run();

	~Game();
public:
	sf::RenderWindow window;
	MenuScreen menuScreen;
	GameScreen gameScreen;
};

