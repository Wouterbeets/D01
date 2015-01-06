/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 09:45:51 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 11:49:14 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>
# include <string>

class Pony {
	private:
		std::string 	name;
		std::string		master;
		int			 	speed;
		int				attack;
		int				defense;
		int				hP;
		bool			ridden;
		std::string		weapon;
	public:
		Pony(void);
		~Pony(void);
		void			SetName(std::string name);
		void			SetMaster(std::string master);
		void			SetSpeed(int speed);
		void			SetAttack(int attack);
		void			SetDefense(int defense);
		void			SetRidden(bool ridden);
		void			SetWeapon(std::string weapon);
		std::string		GetName(void);
		std::string		GetMaster(void);
		int				GetSpeed(void);
		int				GetAttack(void);
		int				GetDefense(void);
		int				GetHP(void);
		bool			GetRidden(void);
		std::string		GetWeapon(void);
		void			Ride(std::string masterName);
		void			GetOff(void);
		void			Whip();
		int				AttackPony(Pony *p);
		int				RecDamage(int damage);
};

#endif
