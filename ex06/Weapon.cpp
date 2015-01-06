#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) :_type(type) {
}

Weapon::~Weapon() {
}

int		Weapon::setType(std::string type){
	this->_type = type;
	return 1;
}

std::string		Weapon::getType() const {
	return _type;
}
