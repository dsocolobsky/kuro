#pragma once
#include <memory>
#include "Entity.h"

class Component
{
public:
	Component(std::unique_ptr<Entity> parent);

	Entity *getParent();

	virtual void update() = 0;
	virtual ~Component();
private:
	std::unique_ptr<Entity> parent;
};

