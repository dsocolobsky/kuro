#include "Entity.h"

void Entity::setX(float x) {
	position.x = x;
}

void Entity::setY(float y) {
	position.y = y;
}

float Entity::getX() {
	return position.x;
}

float Entity::getY() {
	return position.x;
}

void Entity::setWidth(float width) {
	this->width = width;
}

void Entity::setHeight(float width) {
	this->height = width;
}

float Entity::getWidth() {
	return width;
}

float Entity::getHeight() {
	return height;
}

Entity::~Entity() {
}
