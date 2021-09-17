/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/08 00:03:01 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) : _type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;

}

Animal::Animal( Animal const & src ) {

	std::cout << "Animal copy constructor called" << std::endl;

	*this = src;

}

Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;

}

Animal &	Animal::operator=( Animal const & rhs ) {

	std::cout << "Animal assignation operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;

}

void		Animal::makeSound( void ) const {

	std::cout << "Unknown Animal sound" << std::endl;

}

std::string	Animal::getType( void ) const {

	return this->_type;

}
