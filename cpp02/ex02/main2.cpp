/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:36:56 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/01 22:23:27 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void ) {

	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const	c( Fixed( 5.05f ) / Fixed( 2 ) );
	float		f = 11.5f;
	Fixed		d = f++;
	Fixed		e = ++f;
	Fixed 		g = 11.11f;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << c << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;
	std::cout << Fixed::min( b, c ) << std::endl;

	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << f << std::endl;
	std::cout << g << std::endl;
	std::cout << Fixed( f ) << std::endl;

	if (Fixed::>( g ))
		std::cout << "ok" << std::endl;

	return 0;

}
