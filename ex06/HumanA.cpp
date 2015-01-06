#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weapon) :_weapon(weapon), _name(name) {
}

HumanA::~HumanA(){
}

void	HumanA::attack(){
	std::cout << this->_name << " uses his " << this->_weapon.getType() << " to attack his opponents " << std::endl;
}
