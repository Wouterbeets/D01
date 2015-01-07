/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:09:32 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 17:52:58 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_H_
# define _HUMAN_H_
# include "Brain.hpp"
# include <string>
class Human{
	private:
		Brain	_headquarters;
	public:
		std::string		identify();
		Brain&			getBrain();
		Human();
		~Human();

};

#endif
