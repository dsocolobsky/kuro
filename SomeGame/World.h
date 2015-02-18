#pragma once
#include "Player.h"

class World : public Entity
{
public:
	World();

	void update(float dt);
	void render(sf::RenderWindow &window);

	Player& player();
private:
	Player m_player;
};

