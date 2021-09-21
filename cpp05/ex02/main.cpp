/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 00:43:18 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
/*
void	print_error( std::exception & e ) {

	std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;

}*/

void	testingShrubbery( void ) {

	Bureaucrat *			chief = new Bureaucrat("Chief", 42);
	Bureaucrat *			secretary = new Bureaucrat("Secretary", 142);
	ShrubberyCreationForm *	shrubbery = new ShrubberyCreationForm("asciiArtForm");

	std::cout << "\033[33mCreating a bureaucrat and a shrubbery form...\033[0m" << std::endl;
	std::cout << *chief << std::endl;
	std::cout << *secretary << std::endl;
	std::cout << *shrubbery << std::endl;

	std::cout << std::endl << "\033[33mAttempt to execute a form...\033[0m" << std::endl;
	chief->executeForm(*shrubbery);

	std::cout << std::endl << "\033[33mSigning the form then execute it...\033[0m" << std::endl;
	secretary->signForm(*shrubbery);
	std::cout << *shrubbery << std::endl;
	secretary->executeForm(*shrubbery);
	chief->executeForm(*shrubbery);
	std::cout << std::endl << "=> Look the new file created... asciiArtForm_shrubbery..." << std::endl;

	delete chief;
	delete secretary;
	delete shrubbery;
}

int		main( void ) {

	std::cout << "\033[35m===> TESTING SHRUBBERY CREATION FORM\033[0m" << std::endl;
	testingShrubbery();

	return 0;

}
