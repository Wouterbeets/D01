/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 15:11:06 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 16:18:28 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
	std::srand(time(NULL));
	this->_zombies= new Zombie[N]; 
	this->_size = N;
}

ZombieHorde::~ZombieHorde(){
}

void		ZombieHorde::announce(){
	for(int i = 0; i < this->_size; i++){
		this->_zombies[i].announce();
	}	
}
