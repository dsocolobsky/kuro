#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	
	void update(float dt);
	void render(sf::RenderWindow &window);
	void handle_input();
};

