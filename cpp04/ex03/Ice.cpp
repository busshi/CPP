/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:04:19 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 19:55:05 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice( void ): AMateria("ice") {

	std::cout << "Ice Default constructor called" << std::endl;

}

Ice::Ice( Ice const & src ): AMateria("ice") {

	std::cout << "Ice Copy constructor called" << std::endl;

	*this = src;

}

Ice::~Ice( void ) {

	std::cout << "Ice Destructor called" << std::endl;

}

Ice &	Ice::operator=( Ice const & rhs ) {

	std::cout << "Ice Assignation operator called" << std::endl;

	(void)rhs;

	return *this;

}

Ice *	Ice::clone( void ) const {

	return new Ice();

}

void	Ice::use( ICharacter & target ) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

}
