/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/21 16:59:32 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	print_error( std::exception & e ) {

	std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;

}

void	testingNoErrorCreation( void ) {

	Bureaucrat *	b = new Bureaucrat("Bureaucrat", 100);
	Form *			f = new Form("42-B", 42, 24);

	try {
		std::cout << *b << std::endl;
		std::cout << *f << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	delete b;
	delete f;
}

void	testingLowExceptionCreation( void ) {

	try {
		Form *	ltMin = new Form("Form Error", 42, 151);

		std::cout << *ltMin << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	try {
		Form *	ltMin = new Form("Form Error", 160, 42);

		std::cout << *ltMin << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	try {
		Form *	ltMin = new Form("Form Error", 151, 151);

		std::cout << *ltMin << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}
}

void	testingHighExceptionCreation( void ) {

	try {
		Form *	gtMax = new Form("Form Error", 0, 42);

		std::cout << *gtMax << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	try {
		Form *	gtMax = new Form("Form Error", 42, 0);

		std::cout << *gtMax << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}

	try {
		Form *	gtMax = new Form("Form Error", -1, 0);

		std::cout << *gtMax << std::endl;
	}
	catch (std::exception & e) {
		print_error(e);
	}
}

void	testingSignatures( void ) {

	Bureaucrat *	b = new Bureaucrat("Officer", 43);
	Form *			cannotSignYet = new Form("42-B", 42, 1);
	Form *			canSign = new Form ("84-Z", 100, 1);

	std::cout << "BUREAUCRAT STATUS:" << std::endl;
	std::cout << *b << std::endl;

	std::cout << std::endl << "FORM STATUS BEFORE:" << std::endl;
	std::cout << *cannotSignYet << std::endl;
	std::cout << *canSign << std::endl;
	
	std::cout << std::endl<< "SIGN OR NOT?" << std::endl;
	b->signForm(*cannotSignYet);
	b->signForm(*canSign);

	std::cout << std::endl << "FORM STATUS AFTER:" << std::endl;
	std::cout << *cannotSignYet << std::endl;
	std::cout << *canSign << std::endl;

	std::cout << std::endl << "FORM STATUS AFTER PROMOTION:" << std::endl;
	b->incrementGrade();
	std::cout << *b << std::endl;
	b->signForm(*cannotSignYet);
	std::cout << *cannotSignYet << std::endl;

	delete b;
	delete cannotSignYet;
	delete canSign;

}

int		main( void ) {

	std::cout << "\033[33mTesting creation without error...\033[0m" << std::endl ;
	testingNoErrorCreation();
	std::cout << std::endl;

	std::cout << "\033[33mTesting Low Exception Creation...\033[0m" << std::endl ;
	testingLowExceptionCreation();
	std::cout << std::endl;

	std::cout << "\033[33mTesting High Exception Creation...\033[0m" << std::endl ;
	testingHighExceptionCreation();
	std::cout << std::endl;

	std::cout << "\033[33mTesting Signatures...\033[0m" << std::endl ;
	testingSignatures();

	return 0;

}
