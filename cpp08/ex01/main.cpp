/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:15:16 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/29 00:56:38 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

void	testingGivenMain( void ) {

	Span sp = Span(5);

	std::cout << "\033[33mTesting main given in the subject\033[0m" << std::endl;
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Storage : ";
	sp.printStorage();

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

}

void	testingRange() {

	Span	sp = Span(100);

	std::cout << std::endl << "\033[33mTesting to add numbers with a range\033[0m" << std::endl;
	try {
		sp.addRange(0, 100);
		std::cout << "Storage: " << std::endl;
		sp.printStorage();

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	
		std::cout << std::endl << "Testing to add more numbers than the storage size: ";
		sp.addNumber(-42);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void	testingNoSpan( void ) {

	Span	sp(1);

	std::cout << std::endl << "\033[33mTesting no span exception with 1 number:\033[0m" << std::endl;
	sp.addNumber(42);

	std::cout << "Storage: ";
	sp.printStorage();
	try {
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Span	sp2(0);

	std::cout << std::endl << "\033[33mTesting no span exception with an empty storage:\033[0m" << std::endl;

	std::cout << "Storage:";
	sp2.printStorage();
	try {
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void	testingHuge( void ) {

	Span	sp(10000);

	std::cout << std::endl << "\033[33mTesting with a huge storage:\033[0m" << std::endl;
	try {
		std::cout << "Attempt to add a range of numbers bigger than the storage size: ";
		sp.addRange(0, 10002);
//		std::cout << "Storage:";
//		sp.printStorage();
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		std::cout << "Trying to add a supplementary number in a full storage: ";
		sp.addNumber(-42);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void	testingCrazy( void ) {

	Span	sp(100000);

	std::cout << std::endl << "\033[33mTesting with a crazy huge storage:\033[0m" << std::endl;
	try {
		sp.addRange(0, 100000);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

int		main( void ) {

	testingGivenMain();
	testingRange();
	testingNoSpan();
	testingHuge();
	//testingCrazy();

	return 0;
}
