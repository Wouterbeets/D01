/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 12:17:21 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 14:45:37 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
# define ZOMBIE_H_

#include <iostream>

class Zombie {
	private:
		std::string		type;
		std::string		name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void			SetType(std::string t);
		void			SetName(std::string n);
		void			announce();
};

#endif
