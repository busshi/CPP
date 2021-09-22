/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:33:45 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 15:51:51 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ): Form(target + "_PardonForm", _sign, _exec), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ): Form(src), _target(src._target) {

	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	Form::operator=(rhs);

	return *this;
}

void	PresidentialPardonForm::doExecute( void ) const {

	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;

}
