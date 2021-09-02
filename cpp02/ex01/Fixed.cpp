/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:42:10 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 23:07:51 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) : _fixedPoint( 0 ) {

	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

}

Fixed::Fixed( int const n ) {

	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = n << this->_fractionalBits;

}

Fixed::Fixed( float const f ) {

	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf( f * ( 1 << this->_fractionalBits ) );

}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

}

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();

	return *this;

}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_fixedPoint;

}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;

	this->_fixedPoint = raw;

}

float	Fixed::toFloat( void ) const {

	return (float) this->_fixedPoint / ( 1 << this->_fractionalBits );

}

int		Fixed::toInt( void ) const {

	return (int) this->_fixedPoint / ( 1 << this->_fractionalBits );

}

std::ostream &	operator<<( std::ostream & o, Fixed const & i ) {

	o << i.toFloat();

	return o;

}
