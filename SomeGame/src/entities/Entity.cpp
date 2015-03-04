#include "../../include/entities/Entity.h"

void Entity::setX(float x) {
	m_position.x = x;
}

void Entity::setY(float y) {
	m_position.y = y;
}

float Entity::x() {
	return m_position.x;
}

float Entity::y() {
	return m_position.y;
}

void Entity::setWidth(float width) {
	m_width = width;
}

void Entity::setHeight(float width) {
	m_height = width;
}

float Entity::width() {
	return m_width;
}

float Entity::height() {
	return m_height;
}
