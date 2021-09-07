/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/08 00:01:48 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal() {

	std::cout << "Cat default constructor called" << std::endl;

	this->_type = "Cat";

}

Cat::Cat( Cat const & src ) {

	std::cout << "Cat copy constructor called" << std::endl;

	*this = src;

}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;

}

Cat &	Cat::operator=( Cat const & rhs ) {

	std::cout << "Cat assignation operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;

}

void	Cat::makeSound( void ) const {

	std::cout << "Miaou miaou" << std::endl;

}
