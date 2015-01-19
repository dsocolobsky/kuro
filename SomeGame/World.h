#pragma once
#include "Player.h"

class World : public Entity
{
public:
	World();

	void update();
	void render(sf::RenderWindow &window);
private:
	Player player;
};

