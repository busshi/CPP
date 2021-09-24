/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:09:32 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 21:22:43 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"
#include <stdlib.h>
#include <cstring>
#include <limits>

ScalarConversion::ScalarConversion( double literal ): _literal(literal) {}

ScalarConversion::ScalarConversion( ScalarConversion const & src ) {

	_literal = src.getLiteral();
}

ScalarConversion::~ScalarConversion( void ) {}

ScalarConversion &	ScalarConversion::operator=( ScalarConversion const & rhs ) {

	_literal = rhs.getLiteral();

	return *this;
}

double		ScalarConversion::getLiteral( void ) const {

	return _literal;
}

char		ScalarConversion::toChar( void ) const {

	int		c = static_cast<int>(_literal);

	if (c < std::numeric_limits<char>::min() || c > std::numeric_limits<char>::max())
		throw ScalarConversion::impossibleException();

	else if (!isprint(c))
		throw ScalarConversion::nonDisplayableException();

	return c;
}

int				ScalarConversion::toInt( void ) const {

	double	i = static_cast<double>(_literal);

	if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
		throw ScalarConversion::impossibleException();
	
	return static_cast<int>(i);
}

float			ScalarConversion::toFloat( void ) const {

	float	f = static_cast<float>(_literal);
	 
	if (f < -std::numeric_limits<float>::max() || f > std::numeric_limits<float>::max())
		throw ScalarConversion::impossibleException();
	
	return f;
}

double			ScalarConversion::toDouble( void ) const {

	double	d = _literal;

	if (d < -std::numeric_limits<double>::max() || d > std::numeric_limits<double>::max())
		throw ScalarConversion::impossibleException();

	return d;
}
