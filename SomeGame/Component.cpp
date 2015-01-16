#include "Component.h"

Component::Component(Entity &parent) : m_parent(parent) {
}

Entity *Component::parent() {
	return &m_parent;
}