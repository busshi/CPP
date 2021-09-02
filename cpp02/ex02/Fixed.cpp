/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:42:10 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 10:57:50 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) : _fixedPoint( 0 ) {

	return;

}

Fixed::Fixed( Fixed const & src ) {

	*this = src;

	return;

}

Fixed::Fixed( int const n ) {

	this->_fixedPoint = n << this->_fractionalBits;

	return;

}

Fixed::Fixed( float const f ) {

	this->_fixedPoint = roundf( f * ( 1 << this->_fractionalBits ) );

	return;

}

Fixed::~Fixed( void ) {

	return;

}

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();

	return *this;

}

Fixed	Fixed::operator+( Fixed const & rhs ) {

	return Fixed( toFloat() + rhs.toFloat() );;

}

Fixed	Fixed::operator-( Fixed const & rhs ) {

	return Fixed( toFloat() - rhs.toFloat() );;

}

Fixed	Fixed::operator*( Fixed const & rhs ) {

	return Fixed( toFloat() * rhs.toFloat() );;

}

Fixed	Fixed::operator/( Fixed const & rhs ) {

	return Fixed( toFloat() / rhs.toFloat() );;

}

Fixed &	Fixed::operator++( void ) {

	this->_fixedPoint++;

	return *this;

}

Fixed &	Fixed::operator--( void ) {

	this->_fixedPoint--;

	return *this;

}

Fixed	Fixed::operator++( int ) {

	Fixed	tmp = *this;

	++*this;

	return tmp;

}

Fixed	Fixed::operator--( int ) {

	Fixed	tmp = *this;

	--*this;

	return tmp;

}

bool	Fixed::operator>( Fixed const & rhs ) {

	return ( this->_fixedPoint > rhs._fixedPoint );

}

bool	Fixed::operator<( Fixed const & rhs ) {

	return ( this->_fixedPoint < rhs._fixedPoint );

}

bool	Fixed::operator>=( Fixed const & rhs ) {

	return ( this->_fixedPoint >= rhs._fixedPoint );

}

bool	Fixed::operator<=( Fixed const & rhs ) {

	return ( this->_fixedPoint <= rhs._fixedPoint );

}

bool	Fixed::operator==( Fixed const & rhs ) {

	return ( this->_fixedPoint == rhs._fixedPoint );

}

bool	Fixed::operator!=( Fixed const & rhs ) {

	return ( this->_fixedPoint != rhs._fixedPoint );

}

Fixed const &	Fixed::min( Fixed const &a, Fixed const &b ) {

	if ( a._fixedPoint < b._fixedPoint )
		return a;
	else
		return b;

}

Fixed const &	Fixed::max( Fixed const &a, Fixed const &b ) {

	if ( a._fixedPoint > b._fixedPoint )
		return a;
	else
		return b;

}

Fixed &		Fixed::min( Fixed &a, Fixed &b ) {

	if ( a._fixedPoint < b._fixedPoint )
		return a;
	else
		return b;

}

Fixed &		Fixed::max( Fixed &a, Fixed &b ) {

	if (a._fixedPoint > b._fixedPoint)
		return a;
	else
		return b;

}

int		Fixed::getRawBits( void ) const {

	return this->_fixedPoint;

}

void	Fixed::setRawBits( int const raw ) {

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
