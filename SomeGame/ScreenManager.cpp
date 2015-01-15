#include "ScreenManager.h"

ScreenManager::ScreenManager() : activeScreen(nullptr) {

}

void ScreenManager::update(sf::Event &event) {
	if (activeScreen) {
		activeScreen->update(event);
	}
}

void ScreenManager::render(sf::RenderWindow &window) {
	if (activeScreen) {
		activeScreen->render(window);
	}
}

void ScreenManager::addScreen(const std::string &id, ScreenPtr screen) {
	screens[id] = std::move(screen);
}

void ScreenManager::setActiveScreen(const std::string &id) {
	auto s = screens.find(id);

	if (s != screens.end()) {
		activeScreen = s->second.get();
	}
}