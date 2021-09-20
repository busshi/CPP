/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:10:49 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 19:55:19 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure( void ): AMateria("cure") {

	std::cout << "Cure Default constructor called" << std::endl;

}

Cure::Cure( Cure const & src ): AMateria("cure") {

	std::cout << "Cure Copy constructor called" << std::endl;

	*this = src;

}

Cure::~Cure( void ) {

	std::cout << "Cure Destructor called" << std::endl;

}

Cure &	Cure::operator=( Cure const & rhs ) {

	std::cout << "Cure Assignation operator called" << std::endl;

	(void)rhs;

	return *this;

}

Cure *	Cure::clone( void ) const {

	return new Cure();

}

void	Cure::use( ICharacter & target ) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;

}
