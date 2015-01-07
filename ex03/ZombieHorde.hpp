/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 15:11:15 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 16:17:57 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HORDE_H_
# define _ZOMBIE_HORDE_H_
# include "Zombie.hpp" 


class ZombieHorde{
	private:
		Zombie	*_zombies;
		int		_size;
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	announce();
};

#endif
