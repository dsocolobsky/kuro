#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include "../components/PhysicsComponent.h"
#include "../components/AnimationComponent.h"

class PhysicsComponent;
class RenderComponent;

typedef std::unique_ptr<PhysicsComponent> PhysicsPtr;
typedef std::unique_ptr<AnimationComponent> AnimationPtr;

class Entity
{
public:
	virtual void update(float dt)                     = 0;
	virtual void render(sf::RenderWindow &window)     = 0;

	void  setX(float x);
	void  setY(float y);
	float x();
	float y();
	void  setWidth(float width);
	void  setHeight(float height);
	float width();
	float height();

protected:
	sf::Vector2f m_position;
	float        m_width  = 0;
	float        m_height = 0;

	PhysicsPtr      m_physics   = nullptr;
	AnimationPtr    m_animation = nullptr;
};

