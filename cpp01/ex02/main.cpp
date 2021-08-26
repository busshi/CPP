/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:13:38 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 00:03:31 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void ) {

		std::string		str = "HI THIS IS BRAIN";
		std::string*	stringPTR = &str;
		std::string&	stringREF = str;

		std::cout << "address of the string:\t\t" << &str << std::endl;
		std::cout << "address by using pointer:\t" << stringPTR << std::endl;
		std::cout << "address by using reference:\t" << &stringREF << std::endl;
		std::cout << "string using pointer:\t\t" << *stringPTR << std::endl;
		std::cout << "string using reference:\t\t" << stringREF << std::endl;

		return 0;

}
