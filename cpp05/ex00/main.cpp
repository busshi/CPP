/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/21 14:20:57 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	print_error( std::exception & e ) {

	std::cout << e.what() << std::endl;

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

	Bureaucrat *	gtMax = new Bureaucrat("Oldest Bureaucrat", 0);

	try {
		std::cout << *gtMax << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	delete gtMax;

	Bureaucrat *	ltMin = new Bureaucrat("Youngest Bureaucrat", 151);

	try {
		std::cout << *ltMin << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	delete ltMin;
}

int		main( void ) {

	testingLowException();

	std::cout << std::endl;

	testingHighException();

	std::cout << std::endl;

	testingCreationException();


	return 0;

}
