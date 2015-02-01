#pragma once
#include "Screen.h"
#include "Game.h"

class GameScreen : public Screen
{
public:
	GameScreen(Game &game);
	
	void update(sf::Event &event);
	void render(sf::RenderWindow &window);
};

