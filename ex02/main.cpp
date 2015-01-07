/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 12:17:48 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 15:05:24 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

int		main(){
	ZombieEvent		ze;
	ze.SetZombieType("Slow walking dead eyed but very friendly");
	Zombie			*z = ze.NewZombie("cool zombie");
	ze.randomChump();
	ze.randomChump();
	ze.randomChump();
	z->announce();
	delete z;
	return 0;
}
