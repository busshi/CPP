/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:09:32 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 14:41:01 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"
#include <stdlib.h>
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

char		ScalarConversion::toCharDigit( void ) {

	int		i;

	try {

		i = toInt();
	}			
	catch (std::exception & e) {

		throw ScalarConversion::impossibleException();
	}

	if (i < 0 || i > 127)
		throw ScalarConversion::impossibleException();

	if (isprint(i)) 
		return static_cast<char>(i);

	throw ScalarConversion::nonDisplayableException();
}

char		ScalarConversion::toCharNoDigit( void ) {

	char c;

	if (_literal.length() > 1)
		throw ScalarConversion::impossibleException();

	c = static_cast<char>(_literal[0]);
		
	if (isprint(c))
		return c;

	throw ScalarConversion::nonDisplayableException();
}

char		ScalarConversion::toChar( void ) {

	bool	digit = true;

	for (int i = 0; _literal[i]; i++) {

		if (!(_literal[i] >= '0' && _literal[i] <= '9') && _literal[i] != '-' && _literal[i] != '.' && _literal[i] != 'f')
			digit = false;
	}

	if (digit)
		return toCharDigit();
	else
		return toCharNoDigit();
}

int			ScalarConversion::toInt( void ) {

	double	i;

	try {

		i = static_cast<double>(std::strtod(_literal.c_str(), NULL));
		if (i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max())
			return static_cast<int>(i);

		throw ScalarConversion::impossibleException();
	}
	catch (std::exception & e) {

		throw ScalarConversion::impossibleException();
	}
}

float		ScalarConversion::toFloat( void ) {

	float	f;

	try {

		f = static_cast<float>(std::strtof(_literal.c_str(), NULL));
		return f;
	}
	catch (std::exception & e) {

		throw ScalarConversion::impossibleException();
	}
}

double		ScalarConversion::toDouble( void ) {

	double	d;

	try {

		d = static_cast<double>(std::strtod(_literal.c_str(), NULL));
		return d;
	}
	catch (std::exception & e){

		throw ScalarConversion::impossibleException();
	}
}
