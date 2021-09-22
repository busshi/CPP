/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 16:30:30 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
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

void	testingRobotomyRequest ( void ) {

	Bureaucrat *			officer = new Bureaucrat("Robotomizer", 42);
	Bureaucrat *			secretary = new Bureaucrat("Secretary", 70);
	RobotomyRequestForm *	robot = new RobotomyRequestForm("Human");

	std::cout << "\033[33mCreating bureaucrats and a roboomy reauest form...\033[0m" << std::endl;
	std::cout << *officer << std::endl;
	std::cout << *secretary << std::endl;
	std::cout << *robot << std::endl;

	std::cout << std::endl << "\033[33mAttempt to execute a form...\033[0m" << std::endl;
	officer->executeForm(*robot);

	std::cout << std::endl << "\033[33mSigning the form then execute it...\033[0m" << std::endl;
	secretary->signForm(*robot);
	std::cout << *robot << std::endl;
	officer->executeForm(*robot);
	officer->executeForm(*robot);
	officer->executeForm(*robot);
	officer->executeForm(*robot);

	delete officer;
	delete secretary;
	delete robot;
}

void	testingPresidentialPardon( void ) {

	Bureaucrat *				president = new Bureaucrat("President", 6);
	Bureaucrat *				secretary = new Bureaucrat("Secretary in Chief", 26);
	PresidentialPardonForm *	pardon = new PresidentialPardonForm("Al Capone");

	std::cout << "\033[33mCreating bureaucrats and a presidential pardon form...\033[0m" << std::endl;
	std::cout << *president << std::endl;
	std::cout << *secretary << std::endl;
	std::cout << *pardon << std::endl;

	std::cout << std::endl << "\033[33mAttempt to execute a form...\033[0m" << std::endl;
	president->executeForm(*pardon);

	std::cout << std::endl << "\033[33mSigning the form then execute it...\033[0m" << std::endl;
	secretary->signForm(*pardon);
	secretary->incrementGrade();
	std::cout << *secretary << std::endl;
	secretary->signForm(*pardon);
	std::cout << *pardon << std::endl;
	president->executeForm(*pardon);
	president->incrementGrade();
	std::cout << *president << std::endl;
	president->executeForm(*pardon);

	delete president;
	delete secretary;
	delete pardon;
}

int		main( void ) {

	std::cout << "\033[35m===> TESTING SHRUBBERY CREATION FORM\033[0m" << std::endl;
	testingShrubbery();
	std::cout << std::endl;

	std::cout << "\033[35m===> TESTING ROBOTOMY REQUEST FORM\033[0m" << std::endl;
	testingRobotomyRequest();
	std::cout << std::endl;

	std::cout << "\033[35m===> TESTING PRESIDENTIAL PARDON FORM\033[0m" << std::endl;
	testingPresidentialPardon();

	return 0;

}
