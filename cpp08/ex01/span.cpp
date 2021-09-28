/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:11:33 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/29 00:57:36 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <cstdlib>

Span::Span( void ): _size(0), _storage() {}

Span::Span( unsigned int N ): _size(N), _storage() {}

Span::Span( Span const & src ) {

	*this = src;
}

Span::~Span( void ) {}

Span &			Span::operator=( Span const & rhs ) {

	if (this != &rhs) {

		this->_size = rhs._size;
		this->_storage = rhs._storage;
	}
	return *this;
}

void			Span::addNumber( int nb ) {

	if (_storage.size() == _size)
		throw FullStorageException();

	_storage.push_back(nb);
}

void			Span::addRange( int start, int end ) {

	try {
		for (int nb = start; nb < end; nb++)
			addNumber(nb);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan( void ) {

	if (_storage.size() <= 1)
		throw NoSpanException();

	int		span = abs(_storage[0] - _storage[1]);

	for (unsigned int i = 0; i < _storage.size(); i++) {

		for (unsigned int j = i + 1; j < _storage.size(); j++) {

			if (span > abs(_storage[i] - _storage[j]))
				span = abs(_storage[i] - _storage[j]); 
		}
	}
	return static_cast<unsigned int>(span);
}

unsigned int	Span::longestSpan( void ) {

	if (_storage.size() <= 1)
		throw NoSpanException();

	int		min = _storage[0];
	int		max = _storage[0];

	for (unsigned int i = 0; i < _storage.size(); i++) {

		if (_storage[i] > max)
			max = _storage[i];
		if (_storage[i] < min)
			min = _storage[i];
	}

	return static_cast<unsigned int>(max - min);
}

void			Span::printStorage( void ) {

	for (unsigned int i = 0; i < _storage.size(); i++) {
		std::cout << _storage[i] << " ";
	}

	std::cout << std::endl;
}
