/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:13:38 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/26 23:48:03 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void ) {

		std::string		str = "HI THIS IS BRAIN";
		std::string*	stringPTR = &str;
		std::string&	stringREF = str;

		std::cout << &str << std::endl;
		std::cout << stringPTR << std::endl;
		std::cout << &stringREF << std::endl;
		std::cout << *stringPTR << std::endl;
		std::cout << stringREF << std::endl;

		return 0;

}
