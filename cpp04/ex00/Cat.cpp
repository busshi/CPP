/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/07 15:22:23 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) {

	std::cout << "Default constructor called" << std::endl;

}

Cat::Cat( Cat const & src ) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;

}

Cat::~Cat( void ) {

	std::cout << "Destructor called" << std::endl;

}

Cat &	Cat::operator=( Cat const & rhs ) {

	std::cout << Assignation operator called << std::endl;

	if (this != &rhs)
		this-> = rhs.;

	return *this;

}
