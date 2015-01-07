/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 07:59:21 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/07 07:59:26 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
