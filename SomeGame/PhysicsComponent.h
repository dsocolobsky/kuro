#pragma once
#include "Component.h"
#include "Direction.h"

class PhysicsComponent : public Component
{
public:
	PhysicsComponent(Entity &parent);

	void setDx(short d);
	short dx();
	void setDy(short d);
	short dy();
	void setAcceleration(float a);

	void update();
private:
	sf::Vector2f m_velocity;
	Direction    m_direction;
	float        m_acceleration;
	float        m_topSpeed;
};

