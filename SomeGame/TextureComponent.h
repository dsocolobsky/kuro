#pragma once
#include "Component.h"
#include "AnimatedSprite.hpp"
#include "Entity.h"
#include <map>
#include <memory>

class TextureComponent : public Component
{
public:
	TextureComponent(Entity &parent);

	void update();
	void render(sf::RenderWindow &window);
	void set_texture(sf::Texture);

private:
	sf::Texture m_texture;
	sf::Sprite  m_sprite;
};

