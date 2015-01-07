/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 12:17:16 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 15:06:45 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) :name(name) {
	
}

Zombie::~Zombie(void){
	std::cout << "can't find brains. i'll just have to eat myself then, *omnomnom*" << std::endl;
}

void			Zombie::SetType(std::string t) {
	this->type = t;
}
void			Zombie::SetName(std::string n) {
	this->type = n;
}

void			Zombie::announce(){
	std::cout << "MY NAME IS " << this->name << " I AM A " << this->type << " ZOMBIE and i eat BraAaAiIinNsSs" << std::endl;
}
