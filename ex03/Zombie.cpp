/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 12:17:16 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 16:15:44 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = this->getRandName();
	this->type = this->getRandType();
}

std::string		Zombie::getRandType(){
	std::string names[] = {"Big", "Small","Fast","Slow","Dumb","Smart","Foolish","Master", "Awkward", "Best Ever"};
	return names[(rand() % 10)];
}

std::string		Zombie::getRandName(){
	std::string names[] = {"Sjaak", "Bart","Sjors","Mark","David","Karel","Bram","Hein", "Piet", "Geert"};
	return names[(rand() % 10)];
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
