/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 22:20:41 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	print_error( std::exception & e ) {

	std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;

}

int		main( void ) {

	Intern			someRandomIntern;
	Bureaucrat *	b = new Bureaucrat("B.O.S.S.", 1);
	Form *			scf;
	Form *			rrf;
	Form *			ppf;
	Form *			unknown;

	std::cout << "\033[35m===> TESTING SHRUBBERY CREATION FORM\033[0m" << std::endl;

	try {
		scf = someRandomIntern.makeForm("shrubbery creation", "Forest");
		std::cout << *scf << std::endl;
		b->signForm(*scf);
		std::cout << *scf << std::endl;
		b->executeForm(*scf);
		std::cout << std::endl;
		delete scf;
	}
	catch (std::exception & e)
	{
		print_error(e);
	}


	std::cout << std::endl << "\033[35m===> TESTING ROBOTOMY REQUEST FORM\033[0m" << std::endl;

	try {
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		b->signForm(*rrf);
		std::cout << *rrf << std::endl;
		b->executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception & e)
	{
		print_error(e);
	}


	std::cout << std::endl << "\033[35m===> TESTING PRESIDENTIAL PARDON FORM\033[0m" << std::endl;

	try {
		ppf = someRandomIntern.makeForm("presidential pardon", "Innocent Guy");
		std::cout << *ppf << std::endl;
		b->signForm(*ppf);
		std::cout << *ppf << std::endl;
		b->executeForm(*ppf);
		delete ppf;
	}
	catch (std::exception & e)
	{
		print_error(e);
	}


	std::cout << std::endl << "\033[35m===> TESTING UNKNOWN FORM\033[0m" << std::endl;

	try {
		unknown = someRandomIntern.makeForm("random form", "Error");
		delete unknown;
	}
	catch (std::exception & e)
	{
		print_error(e);
	}

	delete b;

	return 0;

}
