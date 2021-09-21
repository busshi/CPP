/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/21 14:52:47 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	print_error( std::exception & e ) {

	std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;

}

void	testingLowException( void ) {

	Bureaucrat *	min = new Bureaucrat("Young Bureaucrat", 150);

	try {
		std::cout << *min << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	try {
		min->incrementGrade();
		std::cout << *min << std::endl;
	}
	catch (std::exception & e ) {
		print_error(e);
	}

	try {
		min->decrementGrade();
		std::cout << *min << std::endl;
		min->decrementGrade();
		std::cout << *min << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	delete min;
}

void	testingHighException( void ) {

	Bureaucrat *	max = new Bureaucrat("Old Bureaucrat", 1);

	try {
		std::cout << *max << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	try {
		max->decrementGrade();
		std::cout << *max << std::endl;
	}
	catch (std::exception & e ) {
		print_error(e);
	}

	try {
		max->incrementGrade();
		std::cout << *max << std::endl;
		max->incrementGrade();
		std::cout << *max << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	delete max;
}

void	testingCreationException( void ) {

	try {
		Bureaucrat *	gtMax = new Bureaucrat("Oldest Bureaucrat", 0);
		std::cout << *gtMax << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	try {
		Bureaucrat *	ltMin = new Bureaucrat("Youngest Bureaucrat", 151);
		std::cout << *ltMin << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}
}

int		main( void ) {

	std::cout << "\033[33mTesting Low Exception...\033[0m" << std::endl ;
	testingLowException();
	std::cout << std::endl;

	std::cout << "\033[33mTesting High Exception...\033[0m" << std::endl ;
	testingHighException();
	std::cout << std::endl;

	std::cout << "\033[33mTesting Creation Error...\033[0m" << std::endl ;
	testingCreationException();


	return 0;

}
