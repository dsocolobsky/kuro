#include "Screen.h"
#include "ScreenManager.h"

Screen::Screen(ScreenManager &scrManager) : screenManager(scrManager) {
	
}

void Screen::setActiveScreen(const std::string &id) {
	screenManager.setActiveScreen(id);
}