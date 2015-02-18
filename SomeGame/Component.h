#pragma once
#include <memory>

class Entity;

class Component
{
public:
	Component(Entity &parent);
protected:
	Entity &m_parent;
};

