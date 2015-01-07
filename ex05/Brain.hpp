/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:09:22 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 17:57:47 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_H_
# define _BRAIN_H_
#include <string>

class Brain {
	private:
		
	public:
		std::string 	identify();
		~Brain();
		Brain();
};

#endif
