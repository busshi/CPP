/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:23:33 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/28 15:49:38 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T >
void	initArray( T & content ) {

	content = 42;
}

template< typename T >
void	printArray( T const & content ) {

	std::cout << content << " ";
}

template<typename T >
void	incrementArray( T & content ) {

	content++;
}

void	testingInt( void ) {

	size_t	len = 5;
	int		array[5] = {42, 24, 12, 6, 3};

	std::cout << "\033[33mTesting integers...\033[0m" << std::endl;
	std::cout << "Print the array..." << std::endl;
	::iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Increment each value in the array and display it..." << std::endl;
	::iter(array, len, incrementArray<int>);
	::iter(array, len, printArray<int>);

	std::cout << std::endl << std::endl << "Reinit each value to 42 and display the array..." << std::endl;
	::iter(array, len, initArray<int>);
	::iter(array, len, printArray<int>);
}

void	testingChar( void ) {

	size_t	len = 5;
	char	array[5] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << std::endl << std::endl << "\033[33mTesting char...\033[0m" << std::endl;
	std::cout << "Print the array..." << std::endl;
	::iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Increment each value in the array and display it..." << std::endl;
	::iter(array, len, incrementArray<char>);
	::iter(array, len, printArray<char>);

	std::cout << std::endl << std::endl << "Reinit each value to 42 ('*') and display the array..." << std::endl;
	::iter(array, len, initArray<char>);
	::iter(array, len, printArray<char>);
}

void	testingFloat( void ) {

	size_t	len = 5;
	float	array[5] = {42.42f, 84.84f, 168.168f, 336.336f, 672.672f};

	std::cout << std::endl << std::endl << "\033[33mTesting float...\033[0m" << std::endl;
	std::cout << "Print the array..." << std::endl;
	::iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Increment each value in the array and display it..." << std::endl;
	::iter(array, len, incrementArray<float>);
	::iter(array, len, printArray<float>);

	std::cout << std::endl << std::endl << "Reinit to 42 the elements in the array and display it..." << std::endl;
	::iter(array, len, initArray<float>);
	::iter(array, len, printArray<float>);
}

void	testingString( void ) {

	size_t		len = 3;
	std::string	array[5] = {"hello", "coucou", "holà"};

	std::cout << std::endl << std::endl << "\033[33mTesting strings...\033[0m" << std::endl;
	std::cout << "Print the initialized array..." << std::endl;
	::iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Reinit the strings with default value and display the array..." << std::endl;
	::iter(array, len, initArray<std::string>);
	::iter(array, len, printArray<std::string>);
	std::cout << std::endl;
}

int		main( void ) {

	testingInt();
	testingChar();
	testingFloat();
	testingString();

	return 0;
}
