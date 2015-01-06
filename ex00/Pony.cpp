/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 09:45:45 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 12:01:16 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(void) {	
	this->hP = 11;
	this->defense = 1;
	this->attack = 2;
	this->ridden = false;
	this->weapon = "none";
	this->speed = 2;
}

Pony::~Pony(){
	std::cout << this->name <<  " died >:)" << std::endl;
}

void			Pony::SetName(std::string name){
	this->name	= name;
}

void			Pony::SetMaster(std::string master){
	this->master= master;
}

void			Pony::SetSpeed(int speed){
	this->speed= speed;
}

void			Pony::SetAttack(int attack){
	this->attack= attack;
}

void			Pony::SetDefense(int defense){
	this->defense= defense;
}

void			Pony::SetRidden(bool ridden){
	this->ridden= ridden;
}

void			Pony::SetWeapon(std::string weapon){
	this->weapon= weapon;
}

std::string		Pony::GetName(void){
	return this->name;
}

std::string		Pony::GetMaster(void){
	return this->master;
}

int				Pony::GetSpeed(void){
	return this->speed;
}

int				Pony::GetAttack(void){
	return this->attack;
}

int				Pony::GetDefense(void){
	return this->defense;
}

int				Pony::GetHP(void){
	return this->hP;
}

bool			Pony::GetRidden(void){
	return this->ridden;
}

std::string		Pony::GetWeapon(void){
	return this->weapon;
}

void			Pony::Ride(std::string masterName){
	this->master = masterName;
	this->ridden = true;	
	std::cout << "You, the Great " << masterName << ", mounted your mighty steed" << std::endl;
}

void			Pony::GetOff(void){
	this->master = "I am a free pony";
	this->ridden = false;	
	std::cout << "You, the Great rider dismounted your mighty steed" << std::endl;
}

void			Pony::Whip(){
	if(this->ridden){
		std::cout << this->name << " felt a sharp pain near its ass and decides to move quicker" << std::endl;
		this->speed++;
		std::cout << "your speed is now" << this->speed << std::endl;
	}
	else {
		std::cout << this->name << " runs away, you are left all alone :(";
	}
}

int				Pony::AttackPony(Pony *p){
	if(this->speed < p->GetSpeed()){
		p->RecDamage(this->attack);
		if(p->GetHP() > 0){
			std::cout << p->GetName() << " takes a hit from your " << this->weapon  << " but manages to stay up";
			return (this->attack - p->defense);
		}
		else {
			std::cout << p->GetName() << " dies in horribly painfull way";
			return -99;
		}
	}
	std::cout << "your are not going quick enouch to catch up with " << p->GetName() << "try whipping" << std::endl; 
	return 0;
}

int				Pony::RecDamage(int damage){
	this->hP = (damage - this->defense);
	return 0;
}




