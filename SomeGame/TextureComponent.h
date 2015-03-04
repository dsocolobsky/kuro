#pragma once
#include "include\components\Component.h"
#include <SFML/Graphics.hpp>

class TextureComponent :
	public Component
{
public:
	TextureComponent(Entity &parent);

	void update(float dt);
	void render(sf::RenderWindow& window);

	void setTexture(sf::Texture &texture);
private:
	sf::Sprite sprite;
	sf::Texture *texture;
};

