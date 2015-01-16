#pragma once
#include <memory>

class Entity;

class Component
{
public:
	Component(Entity &parent);

	Entity *parent();

	virtual void update() = 0;
private:
	Entity &m_parent;
};

