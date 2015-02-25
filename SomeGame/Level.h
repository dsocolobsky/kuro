#pragma once
#include "Player.h"

class Level
{
public:
	Level();

	void update(float dt);
	void render(sf::RenderWindow &window);

	Player& player();
private:
	Player m_player;
};

