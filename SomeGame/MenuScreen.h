#pragma once
#include "Screen.h"

class MenuScreen : public Screen
{
public:
	MenuScreen();

	void init();
	void update();
	void render();

	~MenuScreen();
};

