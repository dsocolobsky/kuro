#pragma once
#include "Screen.h"
class GameScreen : public Screen
{
public:
	GameScreen(ScreenManager &scrManager);
	
	void update(sf::Event &event);
	void render(sf::RenderWindow &window);
};

