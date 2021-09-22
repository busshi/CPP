/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 19:33:31 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main( void ) {

	Intern			someRandomIntern;
	Bureaucrat *	b = new Bureaucrat("B.O.S.S.", 1);

	std::cout << "\033[35m===> TESTING SHRUBBERY CREATION FORM\033[0m" << std::endl;
	Form *	scf = someRandomIntern.makeForm("shrubbery creation", "Forest");
	std::cout << *scf << std::endl;
	b->signForm(*scf);
	std::cout << *scf << std::endl;
	b->executeForm(*scf);
	std::cout << std::endl;

	std::cout << "\033[35m===> TESTING ROBOTOMY REQUEST FORM\033[0m" << std::endl;
	Form *	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	b->signForm(*rrf);
	std::cout << *rrf << std::endl;
	b->executeForm(*rrf);
	std::cout << std::endl;

	std::cout << "\033[35m===> TESTING PRESIDENTIAL PARDON FORM\033[0m" << std::endl;
	Form *	ppf = someRandomIntern.makeForm("presidential pardon", "Innocent Guy");
	std::cout << *ppf << std::endl;
	b->signForm(*ppf);
	std::cout << *ppf << std::endl;
	b->executeForm(*ppf);
	std::cout << std::endl;

	std::cout << "\033[35m===> TESTING UNKNOWN FORM\033[0m" << std::endl;
	Form *	unknown = someRandomIntern.makeForm("random form", "Error");

	delete scf;
	delete rrf;
	delete ppf;
	delete unknown;

	return 0;

}
