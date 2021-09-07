/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:26:42 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/07 15:26:42 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) {

	std::cout << "Default constructor called" << std::endl;

}

WrongCat::WrongCat( WrongCat const & src ) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;

}

WrongCat::~WrongCat( void ) {

	std::cout << "Destructor called" << std::endl;

}

WrongCat &	WrongCat::operator=( WrongCat const & rhs ) {

	std::cout << Assignation operator called << std::endl;

	if (this != &rhs)
		this-> = rhs.;

	return *this;

}
