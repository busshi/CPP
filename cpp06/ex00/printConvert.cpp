/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printConvert.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:35:40 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 21:48:26 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printConvert.hpp"

void			printChar( ScalarConversion sc, enum e_pseudo pseudo ) {

	std::cout << "char: ";

	try {

		if (pseudo == NAN || pseudo == INF || pseudo == NEG_INF)
			throw ScalarConversion::impossibleException();

		char	c = sc.toChar();

		if (isprint(c))
			std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl;
}
}

void			printInt( ScalarConversion sc, enum e_pseudo pseudo ) {

	std::cout << "int: ";

	try {

		if (pseudo == NAN || pseudo == INF || pseudo == NEG_INF)
			throw ScalarConversion::impossibleException();

		std::cout << sc.toInt() << std::endl;
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl;
	}
}

void			printFloat( ScalarConversion sc, unsigned precision, enum e_pseudo pseudo ) {

	std::cout << "float: ";

	try {

		if (pseudo == NAN)
			std::cout << "nanf" << std::endl;
		else if (pseudo == INF)
			std::cout << "+inff" << std::endl;
		else if (pseudo == NEG_INF)
			std::cout << "-inff" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(precision) << sc.toFloat() << 'f' << std::endl;
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl;
	}
}

void			printDouble( ScalarConversion sc, unsigned precision , enum e_pseudo pseudo ) {

	std::cout << "double: ";

	try {

		if (pseudo == NAN)
			std::cout << "nan" << std::endl;
		else if (pseudo == INF)
			std::cout << "+inf" << std::endl;
		else if (pseudo == NEG_INF)
			std::cout << "-inf" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(precision) << sc.toDouble() << std::endl;
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl;
	}
}
