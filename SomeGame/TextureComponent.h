#pragma once
#include "Component.h"
class TextureComponent : public Component
{
public:
	TextureComponent(Entity &parent);

	void update();
private:
	sf::Texture m_texture;
	sf::Sprite  m_sprite;
};

