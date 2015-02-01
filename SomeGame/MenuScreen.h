#pragma once
#include "Screen.h"

class MenuScreen : public Screen
{
public:
	MenuScreen(Game &game);

	void update(sf::Event &event);
	void render(sf::RenderWindow &window);
};