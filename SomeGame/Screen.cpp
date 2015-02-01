#include "Screen.h"
#include "Game.h"

Screen::Screen(Game &game) : game(game) {

}

void Screen::setActiveScreen(const std::string &id) {
	game.setActiveScreen(id);
}