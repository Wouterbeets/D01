/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 09:45:58 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 12:04:42 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "pony.hpp"

void	stack(){
	Pony	p;
	Pony 	*p2 = new Pony;
	std::string		buff;
	
	p2->SetName("Evil No Good Filthy Stupid Pony ");
	std::cout << "please name your pony: ";	
	std::getline(std::cin, buff);
	p.SetName(buff);
	std::cout << "choose your weapon, carrot atc 10 def 8, or bite atc 12 def 4 :";
	std::getline(std::cin,buff);
	if(buff.compare("carrot") == 0)
	{
		p.SetAttack(10);
		p.SetDefense(8);
	}
	else {
		p.SetAttack(12);
		p.SetDefense(4);
	}
	while(42){
		std::cout << "choose whip, attack, ride, get off  or exit:";
		std::getline(std::cin,buff);
		if (buff.compare("whip") == 0){
			p.Whip();	
		}
		else if (buff.compare("attack") == 0){
			if(p.AttackPony(p2) == -99){
				std::cout << "You won, but there is an atomic bomb and everybody dies" << std::endl;
			}
		}
		else if (buff.compare("ride") == 0){
			std::cout << "type your name so the pony knows what brave knight is mounting it";
			std::getline(std::cin,buff);
			p.Ride(buff);
		}
		else if (buff.compare("get getoff") == 0){
			p.GetOff();	
		}
		else if (buff.compare("exit") == 0) {
			delete p2;
			return;
		}
	}
}

void	heap(){
	Pony	*p = new Pony();
	Pony 	p2;
	std::string		buff;
	std::string		master;
	
	p2.SetName("Evil No Good Filthy Stupid Pony");
	std::cout << "please name your pony: ";	
	std::getline(std::cin, buff);
	p->SetName(buff);
	std::cout << "choose your weapon, carrot atc 10 def 8, or bite atc 12 def 4 :";
	std::getline(std::cin,buff);
	if(buff.compare("carrot") == 0)
	{
		p->SetAttack(10);
		p->SetDefense(8);
	}
	else {
		p->SetAttack(12);
		p->SetDefense(4);
	}
	while(42){
		std::cout << "choose whip, attack, ride, get off  or exit:";
		std::getline(std::cin,buff);
		if (buff.compare("whip") == 0){
			p->Whip();	
		}
		else if (buff.compare("attack") == 0){
			if(p->AttackPony(&p2) == -99){
				std::cout << "You won, but there is an atomic bomb and everybody dies" << std::endl;
			}
		}
		else if (buff.compare("ride") == 0){
			std::cout << "type your name so the pony knows what brave knight is mounting it";
			std::getline(std::cin ,buff);
			p->Ride(master);
		}
		else if (buff.compare("get getoff") == 0){
			p->GetOff();	
		}
		else if (buff.compare("exit") == 0) {
			delete p;
			return;
		}
	}
}

int		main(){
	std::string		buff;

	while(42){
		std::cout << "Choose your pony type, type stackpony or heappony, or exit: " ;
		std::getline(std::cin,buff);
		if(buff.compare("stackpony") == 0){
			stack();	
		}
		else if(buff.compare("heappony") == 0){
			heap();
		}
		else if(buff.compare("exit")){
			return 0;
		}
		return 0;
	}
}

