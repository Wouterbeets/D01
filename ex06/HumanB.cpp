#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :_name(name) {
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon weapon){
	this->_weapon = &weapon;
}

void	HumanB::attack(){
	std::cout << this->_name << " uses his " << this->_weapon->getType() << " to attack his opponents " << std::endl;
}


