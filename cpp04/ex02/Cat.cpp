/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 11:03:36 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal(), _brain( new Brain() ) {

	std::cout << "Cat default constructor called" << std::endl;

	this->_type = "Cat";

}

Cat::Cat( Cat const & src ) : Animal(), _brain( new Brain() ) {

	std::cout << "Cat copy constructor called" << std::endl;

	*this = src;

}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;

	delete this->_brain;

}

Cat &	Cat::operator=( Cat const & rhs ) {

	std::cout << "Cat assignation operator called" << std::endl;

	if (this != &rhs) {

		this->_type = rhs._type;
		*this->_brain = *rhs._brain;
	}

	return *this;

}

void	Cat::makeSound( void ) const {

	std::cout << "Miaou miaou" << std::endl;

}

Brain*	Cat::getBrain( void ) {

	return this->_brain;

}
