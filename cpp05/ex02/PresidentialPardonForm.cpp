/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:33:45 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 14:17:25 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ): Form(target, _sign, _exec), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ): Form(src), _target(src._target) {

	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	Form::operator=(rhs);

	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	Form::execute(executor);

	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;

}
