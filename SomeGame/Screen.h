#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include "Game.h"

class Screen
{
public:
	Screen(std::shared_ptr<Game> game);

	virtual void init()   = 0;
	virtual void update(sf::Event event) = 0;
	virtual void render(sf::RenderWindow &window) = 0;

	virtual ~Screen();
};

