/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/07 15:22:23 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) {

	std::cout << "Default constructor called" << std::endl;

}

Animal::Animal( Animal const & src ) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;

}

Animal::~Animal( void ) {

	std::cout << "Destructor called" << std::endl;

}

Animal &	Animal::operator=( Animal const & rhs ) {

	std::cout << Assignation operator called << std::endl;

	if (this != &rhs)
		this-> = rhs.;

	return *this;

}
