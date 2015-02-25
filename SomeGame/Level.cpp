#include "Level.h"

Level::Level() {
	m_player.setX(120);
	m_player.setY(120);
}

void Level::update(float dt) {
	m_player.update(dt);
}

void Level::render(sf::RenderWindow &window) {
	m_player.render(window);
}

Player& Level::player() {
	return m_player;
}