/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:53:19 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/06 16:57:01 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(){
	std::string foo = "HI THIS IS BRAIN";
	std::string *boo = &foo;
	std::string& ref = foo;	
	std::cout << *boo << std::endl << ref << std::endl;
	return 0;
}
