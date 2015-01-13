#pragma once
#include "Screen.h"

class GameScreen : public Screen
{
public:
	void init();
	void update(sf::Event event);
	void render(sf::RenderWindow &window);
	
	~GameScreen();
};

