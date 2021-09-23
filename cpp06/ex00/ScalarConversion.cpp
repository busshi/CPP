/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:09:32 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/23 20:02:20 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"
#include <cstring>
#include <limits>

ScalarConversion::ScalarConversion( void ): _literal("defaut literal") {}

ScalarConversion::ScalarConversion( std::string literal ): _literal(literal) {}

ScalarConversion::ScalarConversion( ScalarConversion const & src ) {

	_literal = src.getLiteral();
}

ScalarConversion::~ScalarConversion( void ) {}

ScalarConversion &	ScalarConversion::operator=( ScalarConversion const & rhs ) {

	_literal = rhs.getLiteral();

	return *this;
}

std::string ScalarConversion::getLiteral( void ) const {

	return _literal;
}

char		ScalarConversion::toChar( void ) {

	char	c;
	bool	digit;

	digit = true;

	for (int i = 0; _literal[i]; i++) {

		if (_literal[i] < '0' || _literal[i] > '9' || _literal[i] == '.'|| _literal[i] == 'f' || _literal[i] == '-')
			digit = false;
	}

	if (digit) {	
		try {

			int	i = toInt();

			if (i < 0 || i > 127) {

				throw ScalarConversion::impossibleException();
				return 0;
			}

			if (i >= ' ' && i <= '~') {

				c = static_cast<char>(i);
				return c;
			}

			throw ScalarConversion::nonDisplayableException();
	
			return 0;
		}
		catch (std::exception & e) {

			throw ScalarConversion::impossibleException();
			return 0;
		}
	}

	if (_literal.length() > 1) {

		throw ScalarConversion::impossibleException();
		return 0;
	}

	c = static_cast<char>(_literal[0]);
		
	if (c >= ' ' && c <= '~')
		return c;

	throw ScalarConversion::nonDisplayableException();
		
	return 0;
}

int			ScalarConversion::toInt( void ) {

	int		i;

	try {

		i = static_cast<double>(std::strtod(_literal.c_str(), NULL));
		if (i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max())
			return static_cast<int>(i);

		throw ScalarConversion::impossibleException();
		return 0;
	}
	catch (std::exception & e) {

		throw ScalarConversion::impossibleException();
		return 0;
	}
}

float		ScalarConversion::toFloat( void ) {

	float	f;

	try {

		f = static_cast<float>(std::strtof(_literal.c_str(), NULL));
		return f;
	}
	catch (std::out_of_range & e) {

		throw ScalarConversion::impossibleException();
		return 0;
	}
	catch (std::invalid_argument & e) {

		throw ScalarConversion::impossibleException();
		return 0;
	}
}

double		ScalarConversion::toDouble( void ) {

	double	d;

	try {

		d = static_cast<double>(std::strtod(_literal.c_str(), NULL));
		if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
			return static_cast<int>(d);
		
		throw::ScalarConversion::impossibleException();
		return 0;
	}
	catch (std::out_of_range & e){

		throw ScalarConversion::impossibleException();
		return 0;
	}
	catch (std::invalid_argument & e){

		throw ScalarConversion::impossibleException();
		return 0;
	}
}
