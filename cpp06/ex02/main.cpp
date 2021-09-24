/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:57:01 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 15:31:25 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <iostream>

Base *	generate( void ) {

	static int	i = 0;

	srand(time(NULL) + i);
	i++;

	int	mod = rand() % 3;

	if (mod == 0) {

		std::cout << "class [ \033[31mA\033[0m ] created" << std::endl;
		return new A();
	}
	else if (mod == 1) {

		std::cout << "class [ \033[32mB\033[0m ] created" << std::endl;
		return new B();
	}
	else {

		std::cout << "Class [ \033[33mC\033[0m ] created" << std::endl;
		return new C();
	}
}

void	identify( Base * p ) {

	std::cout << "Class [ ";

	if (dynamic_cast<A *>(p))
		std::cout << "\033[31mA";
	else if (dynamic_cast<B *>(p))
		std::cout << "\033[32mB";
	else if (dynamic_cast<C *>(p))
		std::cout << "\033[33mC";

	std::cout << "\033[0m ] was identifyed by pointer" << std::endl;
}

void	identify( Base & p ) {

	std::cout << "Class [ ";

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "\033[31mA";
	}
	catch (std::exception & e ) {}

	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "\033[32mB";
	}
	catch (std::exception & e) {}

	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "\033[33mC";
	}
	catch (std::exception & e ) {}

	std::cout << "\033[0m ] was identifyed by reference" << std::endl;
}

int		main( void ) {

	Base *	base;

	for (int i = 0; i < 10; i++) {
		
		std::cout << "=> Test " << i + 1 << std::endl;
		base = generate();
		identify(base);
		identify(*base);
		std::cout << std::endl;
		delete base;

	}

	return 0;

}
