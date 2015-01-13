#include "MenuScreen.h"

MenuScreen::MenuScreen(std::shared_ptr<Game> game) {
}

void MenuScreen::init() {

}

void MenuScreen::update(sf::Event event) {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		
	}
}

void MenuScreen::render(sf::RenderWindow &window) {
	window.clear(sf::Color::Red);
}

MenuScreen::~MenuScreen() {
}
