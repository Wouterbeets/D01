/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 08:00:24 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/07 08:00:24 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H_
# define _WEAPON_H_

#include <string>

class Weapon{
	private:
		std::string		_type;
	public:
		Weapon(std::string type);
		~Weapon();
		int				setType(std::string type);
		std::string		getType() const;
};

#endif /* _HUMAN_B_H_*/ 
