/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:26:42 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/07 23:57:48 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal() {

	std::cout << "WrongCat default constructor called" << std::endl;

	this->_type = "WrongCat";

}

WrongCat::WrongCat( WrongCat const & src ) {

	std::cout << "WrongCat copy constructor called" << std::endl;

	*this = src;

}

WrongCat::~WrongCat( void ) {

	std::cout << "WrongCat destructor called" << std::endl;

}

WrongCat &	WrongCat::operator=( WrongCat const & rhs ) {

	std::cout << "WrongCat assignation operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return *this;

}

void		WrongCat::makeSound( void ) const {

	std::cout << "Wrong miaou!!!" << std::endl;

}
