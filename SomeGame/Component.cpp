#include "Component.h"

Component::Component(std::shared_ptr<Entity> parent) {
	this->parent = std::move(parent);
}

Entity *Component::getParent() {
	if (this->parent) {
		return parent.get();
	}
}