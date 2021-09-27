/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:24:33 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/27 21:58:37 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

void	testingGivenMain( void ) {

	int		a = 2;
	int		b = 3;

	std::cout << "\033[33mSubject tests...\033[0m" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string	c = "chaine1";
	std::string	d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void	testingInt( void ) {

	int		a = 42;
	int		b = 24;
	int		c = 24;

	std::cout << std::endl << "\033[33mTesting Int...\033[0m" << std::endl;
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Performing swap..." << std::endl;
	::swap(a, b);
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Testing min with equals values..." << std::endl;
	std::cout << "Min beween [ " << a << " ] and [ "<<  c << " ] is " << ::min(a, c) << std::endl;
	std::cout << ((::min(a, c) == c) ? "[ \033[32mOK\033[0m ] Second value is return" : "[ \033[31mKO\033[0m ] Second value is not return") << std::endl;
}

void	testingFloat( void ) {

	float	a = 42.4f;
	float	b = 42.42f;
	float	c = 42.42f;

	std::cout << std::endl << "\033[33mTesting Float...\033[0m" << std::endl;
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Performing swap..." << std::endl;
	::swap(a, b);
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Testing min with equals values..." << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  c << " ] is " << ::max(a, c) << std::endl;
	std::cout << ((::max(a, c) == c) ? "[ \033[32mOK\033[0m ] Second value is return" : "[ \033[31mKO\033[0m ] Second value is not return") << std::endl;
}

void	testingDouble( void ) {

	double	a = 42.4;
	double	b = 42.42;
	double	c = 42.42;

	std::cout << std::endl << "\033[33mTesting Double...\033[0m" << std::endl;
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Performing swap..." << std::endl;
	::swap(a, b);
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Testing min with equals values..." << std::endl;
	std::cout << "Min beween [ " << a << " ] and [ "<<  c << " ] is " << ::min(a, c) << std::endl;
	std::cout << ((::min(a, c) == c) ? "[ \033[32mOK\033[0m ] Second value is return" : "[ \033[31mKO\033[0m ] Second value is not return") << std::endl;
}

void	testingChar( void ) {

	char	a = '*';
	char	b = 'z';
	char	c = 'z';

	std::cout << std::endl << "\033[33mTesting Char...\033[0m" << std::endl;
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Performing swap..." << std::endl;
	::swap(a, b);
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Testing max with equals values..." << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  c << " ] is " << ::max(a, c) << std::endl;
	std::cout << ((::max(a, c) == c) ? "[ \033[32mOK\033[0m ] Second value is return" : "[ \033[31mKO\033[0m ] Second value is not return") << std::endl;
}

void	testingString( void ) {

	std::string	a = "Hello, How are you?";
	std::string	b = "Holà que tal¿";
	std::string	c = "Holà que tal¿";

	std::cout << std::endl << "\033[33mTesting String...\033[0m" << std::endl;
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Performing swap..." << std::endl;
	::swap(a, b);
	std::cout << "Min beween [ " << a << " ] and [ "<<  b << " ] is " << ::min(a, b) << std::endl;
	std::cout << "Max beween [ " << a << " ] and [ "<<  b << " ] is " << ::max(a, b) << std::endl;

	std::cout << "Testing min with equals values..." << std::endl;
	std::cout << "Min beween [ " << a << " ] and [ "<<  c << " ] is " << ::min(a, c) << std::endl;
	std::cout << ((::min(a, c) == c) ? "[ \033[32mOK\033[0m ] Second value is return" : "[ \033[31mKO\033[0m ] Second value is not return") << std::endl;
}

int		main( void ) {

	testingGivenMain();
	testingInt();
	testingFloat();
	testingDouble();
	testingChar();
	testingString();

	return 0;
}
