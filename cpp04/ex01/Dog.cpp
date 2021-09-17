/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/14 11:33:41 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal(), _brain( new Brain ) {

	std::cout << "Dog default constructor called" << std::endl;

	_type = "Dog";

}

Dog::Dog( Dog const & src ) {

	std::cout << "Dog copy constructor called" << std::endl;

	*this = src;

}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;

	delete this->_brain;

}

Dog &	Dog::operator=( Dog const & rhs ) {

	std::cout << "Dog assignation operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;

}

void	Dog::makeSound( void ) const {

	std::cout << "Wouf wouf" << std::endl;

}
