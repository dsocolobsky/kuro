#include "World.h"

World::World() {
	player.setX(120);
	player.setY(120);
}

void World::update() {
	player.update();
}

void World::render(sf::RenderWindow &window) {
	player.render(window);
}