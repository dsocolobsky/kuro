#pragma once
#include "Component.h"
#include "Entity.h"

class TextureComponent : public Component
{
public:
	TextureComponent(Entity &parent);

	void update();
	void render(sf::RenderWindow &window);
private:
	sf::Texture m_texture;
	sf::Sprite  m_sprite;
};

