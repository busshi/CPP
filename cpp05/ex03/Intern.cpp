/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:53:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 18:27:08 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void ) {}

Intern::Intern( Intern const & src ) {

	*this = src;
}

Intern::~Intern( void ) {}

Intern &	Intern::operator=( Intern const & rhs ) {

	(void)rhs;

	return *this;
}

Form *		Intern::createShrubberyCreationForm( std::string const & target ) {

	return new ShrubberyCreationForm(target);
}

Form *		Intern::createRobotomyRequestForm( std::string const & target ) {

	return new RobotomyRequestForm(target);
}

Form *		Intern::createPresidentialPardonForm( std::string const & target ) {

	return new PresidentialPardonForm(target);
}

Form *		Intern::makeForm(std::string const name, std::string const target) {

	Form *		newForm;

	formTypes	selectType[] = 
	{
		{ "shrubbery creation", &Intern::createShrubberyCreationForm },
		{ "robotomy reauest", &Intern::createRobotomyRequestForm },
		{ "presidential pardon", &Intern::createPresidentialPardonForm }
	};

	for (int i = 0; i < 3; i++) {

		if (name == selectType[i].name) {

			newForm = selectType[i].createForm(target);
			std::cout << "Intern creates [ " << newForm->getName() << " ] named [ " << target << " ]" << std::endl;

			return (newForm);
		}
	}

	std::cout << "Intern error: cannot create a forn with this entry [" << name << "]" << std::endl;
	return 0;
}
