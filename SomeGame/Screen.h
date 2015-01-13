#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

class Game;

class Screen
{
public:
	virtual void init()                             = 0;
	virtual void update(sf::Event event)            = 0;
	virtual void render(sf::RenderWindow &window)   = 0;

	virtual ~Screen();
protected:
	std::shared_ptr<Game> game;
};

