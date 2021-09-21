
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:14:37 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/21 21:11:49 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ): Form(target + "_shrubbery", _sign, _exec), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ): Form(src), _target(src._target) {

	*this = src;

}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {

//	if (this != &rhs)
//		this->_target = rhs._target;
	Form::operator=(rhs);

	return *this;

}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {

	Form::execute(executor);

	std::ofstream	ofs(getName().c_str());

	if (!ofs) {

		ofs.close();
		std::cout << "Error while creating file [ " << getName() << " ]" << std::endl;
	}
	else {

		ofs << "    ████╗      ██████╗" << std::endl;
		ofs << "   ██╔██║     ██╔═══██╗" << std::endl;
		ofs << "  ██╔╝██║     ╚═╝ ██╔═╝" << std::endl;
		ofs << " ██╔╝ ██║       ██╔═╝" << std::endl;
		ofs << "██████████╗   ██╔═╝ ██╗" << std::endl;
		ofs << "╚═════██╔═╝   ████████║" << std::endl;
		ofs << "      ╚═╝     ╚═══════╝" << std::endl;
	}

	ofs.close();
}
