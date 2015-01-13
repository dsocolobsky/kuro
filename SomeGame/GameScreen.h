#pragma once
#include "Screen.h"

class GameScreen : public Screen
{
public:
	GameScreen(std::shared_ptr<Game> game);

	void init();
	void update(sf::Event event);
	void render(sf::RenderWindow &window);
	
	~GameScreen();
};

