#include "TextureComponent.h"
#include "Logger.h"

TextureComponent::TextureComponent(Entity &parent) : Component(parent) {
}

void TextureComponent::set_texture(sf::Texture texture) {
	m_texture = texture;
	m_sprite.setTexture(texture);
}

void TextureComponent::update() {
	this->m_sprite.setPosition(sf::Vector2f(m_parent.x(), m_parent.y()));
}

void TextureComponent::render(sf::RenderWindow &window) {
	window.draw(m_sprite);
}