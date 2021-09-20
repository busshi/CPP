/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:08:37 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 20:28:08 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria( std::string const & type ): _type(type) {

	std::cout << "AMateria Default constructor called" << std::endl;

}

AMateria::AMateria( AMateria const & src ) {

	std::cout << "AMateria Copy constructor called" << std::endl;

	*this = src;

}

AMateria::~AMateria( void ) {

	std::cout << "AMateria Destructor called" << std::endl;

}

AMateria &	AMateria::operator=( AMateria const & rhs ) {

	std::cout << "AMateria Assignation operator called" << std::endl;

	(void)rhs;

	return *this;

}

std::string const &	AMateria::getType( void ) const {

	return this->_type;

}

void		AMateria::use( ICharacter & target ) {

	(void)target;

}
