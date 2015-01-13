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
private:
	sf::RenderWindow            window;
	Screen                      *screen;
	std::unique_ptr<MenuScreen> menuScreen;
	std::unique_ptr<GameScreen> gameScreen;
};

