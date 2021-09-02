/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:36:56 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 11:02:49 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void ) {

	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const	c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const	d( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const	e( Fixed( 5.05f ) - Fixed( 2 ) );

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

	if ( Fixed( 2 < 1 ) == 0 )
		std::cout << "2 is greater than 1" << std::endl;
	else
		std::cout << "2 is not greater than 1" << std::endl;

	if ( Fixed( 2 > 1 ) == 1 )
		std::cout << "2 is greater than 1" << std::endl;
	else
		std::cout << "2 is not greater than 1" << std::endl;

	if ( Fixed( 2.01f == 2.01f ) == 1 )
		std::cout << "2.01 is equal to 2.01" << std::endl;
	else
		std::cout << "2.01 is not equal to 2.01" << std::endl;

	if ( Fixed( 3.1234f == 3.123f ) == 0 )
		std::cout << "3.1234 is not equal to 3.123" << std::endl;
	else
		std::cout << "3.1234 is equal to 3.123" << std::endl;

	return 0;

}
