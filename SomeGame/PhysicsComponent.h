#pragma once
#include <SFML/Graphics.hpp>
#include "Component.h"

class Entity;

class PhysicsComponent : public Component
{
public:
	PhysicsComponent(Entity &parent);

	void setDx(short d);
	short dx();
	void setDy(short d);
	short dy();

	float speed();
	void setSpeed(float s);

	void update();
private:
	short m_dx;
	short m_dy;
	float m_speed;
};

