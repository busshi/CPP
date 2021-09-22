/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 14:02:11 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testingShrubbery( void ) {

	Bureaucrat *			chief = new Bureaucrat("Chief", 42);
	Bureaucrat *			secretary = new Bureaucrat("Secretary", 142);
	ShrubberyCreationForm *	shrubbery = new ShrubberyCreationForm("asciiTreesForm");

	std::cout << "\033[33mCreating bureaucrats and a shrubbery form...\033[0m" << std::endl;
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

void	testingPresidentialPardon( void ) {

	Bureaucrat *				president = new Bureaucrat("President", 1);
	Bureaucrat *				secretary = new Bureaucrat("Secretary in Chief", 26);
	PresidentialPardonForm *	pardon = new PresidentialPardonForm("BEG_FOR_MERCY");

	std::cout << "\033[33mCreating bureaucrats and a presidential pardon form...\033[0m" << std::endl;
	std::cout << *president << std::endl;
	std::cout << *secretary << std::endl;
	std::cout << *pardon << std::endl;

	delete president;
	delete secretary;
	delete pardon;
}

int		main( void ) {

	std::cout << "\033[35m===> TESTING SHRUBBERY CREATION FORM\033[0m" << std::endl;
	testingShrubbery();
	std::cout << std::endl;

	std::cout << "\033[35m===> TESTING PRESIDENTIAL PARDON FORM\033[0m" << std::endl;
	testingPresidentialPardon();
	std::cout << std::endl;

	return 0;

}
