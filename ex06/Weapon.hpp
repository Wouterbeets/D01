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
