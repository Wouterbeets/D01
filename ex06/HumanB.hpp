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
