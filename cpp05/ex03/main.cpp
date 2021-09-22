/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:54:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 18:27:10 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main( void ) {

	Intern	someRandomIntern;
	Form *  scf;
	Form *  rrf;
	Form * 	ppf;
	Form *	unknown;

	std::cout << "\033[35m===> TESTING SHRUBBERY CREATION FORM\033[0m" << std::endl;
	scf = someRandomIntern.makeForm("shrubbery creation", "Forest");
	std::cout << std::endl;

	std::cout << "\033[35m===> TESTING ROBOTOMY REQUEST FORM\033[0m" << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << std::endl;

	std::cout << "\033[35m===> TESTING PRESIDENTIAL PARDON FORM\033[0m" << std::endl;
	ppf = someRandomIntern.makeForm("presidential pardon", "Sorry");

	std::cout << "\033[35m===> TESTING UNKNOWN FORM\033[0m" << std::endl;
	unknown = someRandomIntern.makeForm("random form", "Error");

	delete scf;
	delete rrf;
	delete ppf;
	delete unknown;

	return 0;

}
