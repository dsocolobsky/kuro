#include "World.h"

World::World() {
	m_player.setX(120);
	m_player.setY(120);
}

void World::update(float dt) {
	m_player.update(dt);
}

void World::render(sf::RenderWindow &window) {
	m_player.render(window);
}

Player& World::player() {
	return m_player;
}