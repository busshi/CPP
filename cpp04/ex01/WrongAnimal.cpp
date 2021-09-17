/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:36:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/08 00:02:34 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal") {

	std::cout << "WrongAnimal default constructor called" << std::endl;

}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;

	*this = src;

}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "WrongAnimal destructor called" << std::endl;

}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {

	std::cout << "WrongAnimal assignation operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;

}

void		WrongAnimal::makeSound( void ) const {

	std::cout << "Unkown WrongAnimal sound" << std::endl;

}

std::string	WrongAnimal::getType( void ) const {

	return this->_type;

}
