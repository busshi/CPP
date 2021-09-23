/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:08:41 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/23 23:38:04 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"
#include <iostream>
#include <iomanip>

void	printChar( ScalarConversion sc ) {

	std::cout << "char: ";

	try {
		
		char	c = sc.toChar();

		if (c >= ' ' && c <= '~')
			std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl;
	}
}

void	printInt( ScalarConversion sc ) {

	std::cout << "int: ";

	try {

		std::cout << sc.toInt() << std::endl;
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl;
	}
}

void	printFloat( ScalarConversion sc ) {

	std::cout << "float: ";

	try {

		std::cout << std::fixed << std::setprecision(1) << sc.toFloat() << 'f' << std::endl;
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl;
	}
}

void	printDouble( ScalarConversion sc ) {

	std::cout << "double: ";

	try {

		std::cout << std::fixed << std::setprecision(1) << sc.toDouble() << std::endl;
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl;
	}
}

int		main( int ac, char **av ) {

	if (ac != 2) {

		std::cout << "Usage: ./scalarConvertion [string_to_convert]" << std::endl;
		return 1;
	}

	ScalarConversion	sc(av[1]);

	printChar(sc);
	printInt(sc);
	printFloat(sc);
	printDouble(sc);

	return 0;
}
