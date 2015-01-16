#pragma once
#include "Component.h"
#include "Direction.h"

class PhysicsComponent : public Component
{
public:
private:
	Direction direction;
	sf::Vector2f velocity;
};

