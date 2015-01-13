#pragma once
#include "Screen.h"

class MenuScreen : public Screen
{
public:
	MenuScreen(std::shared_ptr<Game> game);

	void init();
	void update(sf::Event event);
	void render(sf::RenderWindow &window);

	~MenuScreen();
};

