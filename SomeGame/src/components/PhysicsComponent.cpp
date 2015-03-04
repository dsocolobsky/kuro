#include "../../include/components/PhysicsComponent.h"

PhysicsComponent::PhysicsComponent(Entity &parent) : Component(parent), m_dx(0), m_dy(0), m_speed(0) {
}

void PhysicsComponent::update() {
	m_dx = 0;
	m_dy = 0;
}

void PhysicsComponent::setDx(short d) {
	m_dx = d;
}

void PhysicsComponent::setDy(short d) {
	m_dy = d;
}

short PhysicsComponent::dx() {
	return m_dx;
}

short PhysicsComponent::dy() {
	return m_dy;
}

void PhysicsComponent::setSpeed(float s) {
	m_speed = s;
}

float PhysicsComponent::speed() {
	return this->m_speed;
}