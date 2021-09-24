/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:08:41 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 21:49:42 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"
#include "printConvert.hpp"

enum e_pseudo	check_pseudo_literal( char const *av ) {

	std::string		s = av;

	if (s == "nan" || s == "nanf")
		return NAN;
	else if (s == "+inf" || s == "-inf")
		return INF;
	else if (s == "+inff" || s == "-inff")
		return NEG_INF;
	else
		return NON_PSEUDO;
}

unsigned		getPrecision( char const *s, char *endptr ) {

	unsigned scale = 1;

	if (strchr(s, '.')) {

		scale = strlen(strchr(s, '.') + 1);
		if (endptr && *endptr == 'f')
			scale -= strlen(endptr);
	}

	return scale;

}

int				checkInput(char *endptr) {

	if (!endptr || !(*endptr))
		return 1;

	else {

		if (endptr[0] == 'f' && !endptr[1])	
			return 1;
		else
			return 0;
	}
	return 1;
}

int				error( void ) {

	std::cout << "Usage: ./convert \"literal_to_convert\" [ char | int | flaot | double ]. ";
	std::cout << "Example: ./convert \"42.0f\"" << std::endl;

	return 1;
}

int				main( int ac, char **av ) {

	if (ac != 2)
		return error();

	char *				endptr = NULL;
	unsigned			precision = 1;
	enum e_pseudo		pseudo = check_pseudo_literal(av[1]);

	if (strlen(av[1]) == 1 && !isdigit(av[1][0])) {

		ScalarConversion	sc(static_cast<double>(av[1][0]));

		printChar(sc, pseudo);
		printInt(sc, pseudo);
		printFloat(sc, precision, pseudo);
		printDouble(sc, precision, pseudo);
	}

	else {

		double	d = strtod(av[1], &endptr);

		if (!checkInput(endptr))
			return error();

		ScalarConversion	sc(d);
		
		precision = getPrecision(av[1], endptr);

		printChar(sc, pseudo);
		printInt(sc, pseudo);
		printFloat(sc, precision, pseudo);
		printDouble(sc, precision, pseudo);
	}

	return 0;
}
