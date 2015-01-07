/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 08:00:04 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/07 08:00:07 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


