/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:23:33 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/27 14:32:39 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "functions.hpp"

void	testingInt( void ) {

	size_t	len = 5;
	int		array[5] = {42, 24, 12, 6, 3};

	std::cout << "\033[33mTesting integers...\033[0m" << std::endl;
	std::cout << "Print the initialized array..." << std::endl;
	iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Increment each value in the array and display it..." << std::endl;
	iter(array, len, incrementArray);
	iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Reinit the array and display it..." << std::endl;
	iter(array, len, initArray);
	iter(array, len, printArray);
}

void	testingChar( void ) {

	size_t	len = 5;
	char	array[5] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << std::endl << std::endl << "\033[33mTesting char...\033[0m" << std::endl;
	std::cout << "Print the initialized array..." << std::endl;
	iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Increment each value in the array and display it..." << std::endl;
	iter(array, len, incrementArray);
	iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Reinit the array and display it..." << std::endl;
	iter(array, len, initArray);
	iter(array, len, printArray);
}

void	testingFloat( void ) {

	size_t	len = 5;
	float	array[5] = {42.42f, 84.84f, 168.168f, 336.336f, 672.672f};

	std::cout << std::endl << std::endl << "\033[33mTesting float...\033[0m" << std::endl;
	std::cout << "Print the initialized array..." << std::endl;
	iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Increment each value in the array and display it..." << std::endl;
	iter(array, len, incrementArray);
	iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Reinit to 0 the elements in the array and display it..." << std::endl;
	iter(array, len, initArray);
	iter(array, len, printArray);
}

void	testingString( void ) {

	size_t		len = 3;
	std::string	array[3] = {"hello", "coucou", "holà"};

	std::cout << std::endl << std::endl << "\033[33mTesting strings...\033[0m" << std::endl;
	std::cout << "Print the initialized array..." << std::endl;
	iter(array, len, printArray);

	std::cout << std::endl << std::endl << "Change the strings in the array and display it..." << std::endl;
	iter(array, len, changeString);
	iter(array, len, printArray);
	std::cout << std::endl;
}

int		main( void ) {

	testingInt();
	testingChar();
	testingFloat();
	testingString();

	return 0;
}
