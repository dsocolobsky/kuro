#pragma once
#include <memory>
#include "Entity.h"

class Component
{
public:
	Component(Entity &parent);

	Entity *parent();

	virtual void update() = 0;
private:
	Entity &m_parent;
};

