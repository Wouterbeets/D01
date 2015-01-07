/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:08:53 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 17:56:28 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <string>
Brain::Brain(){
}

Brain::~Brain(){
}

std::string 	Brain::identify(){
	std::stringstream	ss;
	std::string			str;

	ss << this;
	ss >> str;
	return str;
}
