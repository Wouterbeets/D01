/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 12:17:30 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 13:37:24 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H_
# define ZOMBIE_EVENT_H_

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent {
	private:
		std::string		getRanName();
		std::string		zombieType;
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void 			randomChump();
		Zombie* 		NewZombie(std::string name);
		void			SetZombieType(std::string type);
};

#endif

