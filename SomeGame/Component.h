#pragma once
#include <memory>

class Entity;

class Component
{
public:
	Component(Entity &parent);

	virtual void update() = 0;
protected:
	Entity &m_parent;
};

