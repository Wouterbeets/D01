/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 12:17:26 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 15:04:58 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>
#include <iostream>

ZombieEvent::~ZombieEvent(void){
}

ZombieEvent::ZombieEvent(void){
	std::srand(time(NULL));
}

Zombie* ZombieEvent::NewZombie(std::string name){
	Zombie	*z = new Zombie(name);	
	z->SetType(this->zombieType);
	return z;
}

std::string		ZombieEvent::getRanName(){
	std::string names[] = {"Sjaak", "Bart","Sjors","Mark","David","Karel","Bram","Hein", "Piet", "Geert"};
	return names[(rand() % 10)];
}

void 	ZombieEvent::randomChump(){
	std::string 	name;
	name = this->getRanName();
	Zombie	z = Zombie(name);
	z.SetType(this->zombieType);
	z.announce();
}

void	ZombieEvent::SetZombieType(std::string type){
	this->zombieType = type;
}
