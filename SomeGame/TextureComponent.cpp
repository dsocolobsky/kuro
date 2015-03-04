#include "TextureComponent.h"
#include "include\entities\Entity.h"


TextureComponent::TextureComponent(Entity &parent) : Component(parent) {

}

void TextureComponent::update(float dt) {
	sprite.setPosition(m_parent.x(), m_parent.y());
}

void TextureComponent::render(sf::RenderWindow &window) {
	window.draw(sprite);
}

void TextureComponent::setTexture(sf::Texture &texture) {
	this->texture = &texture;
}