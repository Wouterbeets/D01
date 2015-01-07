/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 08:00:19 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/07 08:00:21 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_B_H_
# define _HUMAN_B_H_

#include <string>
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon			*_weapon;
		std::string		_name;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon weapon);
};

#endif /* _HUMAN_B_H_*/
