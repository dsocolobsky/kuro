#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
public:
	virtual void update() = 0;
	virtual void render() = 0;

	void  setX(float x);
	void  setY(float y);
	float x();
	float y();
	void  setWidth(float width);
	void  setHeight(float height);
	float width();
	float height();
private:
	sf::Vector2f m_position;
	float        m_width  = 0;
	float        m_height = 0;
};

