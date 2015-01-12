#pragma once
#include <SFML/Graphics.hpp>

class Screen
{
public:
	Screen();

	virtual void init()   = 0;
	virtual void update(sf::Event event) = 0;
	virtual void render() = 0;

	virtual ~Screen();
};

