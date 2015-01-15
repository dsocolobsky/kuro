#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
public:
	virtual void update() = 0;
	virtual void render() = 0;

	void  setX(float x);
	void  setY(float y);
	float getX();
	float getY();
	void  setWidth(float width);
	void  setHeight(float height);
	float getWidth();
	float getHeight();
private:
	sf::Vector2f position;
	float width  = 0;
	float height = 0;
};

