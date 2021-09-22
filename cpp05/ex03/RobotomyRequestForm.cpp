/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:33:45 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 16:35:00 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ): Form(target + "_RobotomizeForm", _sign, _exec), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ): Form(src), _target(src._target) {

	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	Form::operator=(rhs);

	return *this;
}

void	RobotomyRequestForm::doExecute( void ) const {

	static int	var = 0;

	srand(time(NULL) + var);

	std::cout << "DRiiizZZZZ PouIkKKK BzzzZZZz !!!!! ";
   	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "It's a failure! " << this->_target << " has not been robotomized!" << std::endl;

	var++;
}
