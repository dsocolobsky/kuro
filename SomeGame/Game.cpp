#include "Game.h"

Game::Game(int width, int height, std::string title) : window(sf::VideoMode(width, height), title) {
}

Game::~Game() {
}
