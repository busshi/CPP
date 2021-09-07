/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/07 15:22:23 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) {

	std::cout << "Default constructor called" << std::endl;

}

Dog::Dog( Dog const & src ) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;

}

Dog::~Dog( void ) {

	std::cout << "Destructor called" << std::endl;

}

Dog &	Dog::operator=( Dog const & rhs ) {

	std::cout << Assignation operator called << std::endl;

	if (this != &rhs)
		this-> = rhs.;

	return *this;

}
