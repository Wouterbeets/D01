/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:09:31 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 17:53:47 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){
}

Human::~Human(){
}

Brain&	Human::getBrain(){
	Brain& b = this->_headquarters;
	return b;
}

std::string		Human::identify(){
	return this->_headquarters.identify();
}
