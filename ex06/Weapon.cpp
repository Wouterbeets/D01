/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 08:00:23 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/07 08:00:23 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
