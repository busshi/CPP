/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:13:38 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 00:17:11 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int		main( void ) {

		std::string		str = "HI THIS IS BRAIN";
		std::string*	stringPTR = &str;
		std::string&	stringREF = str;

		std::cout << std::left << std::setw(30) << "address of the string: " << &str << std::endl;
		std::cout << std::left << std::setw(30) << "address by using pointer:" << stringPTR << std::endl;
		std::cout << std::left << std::setw(30) << "address by using reference:" << &stringREF << std::endl;
		std::cout << std::left << std::setw(30) << "string using pointer:" << *stringPTR << std::endl;
		std::cout << std::left << std::setw(30) << "string using reference:" << stringREF << std::endl;

		return 0;

}
