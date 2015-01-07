/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 07:59:49 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/07 07:59:52 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_A_H_
# define _HUMAN_A_H_

#include <string>
#include "Weapon.hpp"

class HumanA {
	private:
		Weapon&			_weapon;
		std::string		_name;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack();
};

#endif /* _HUMAN_A_H_*/
