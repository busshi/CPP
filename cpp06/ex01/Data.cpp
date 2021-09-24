/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:27:57 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 13:59:55 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

Data::Data( std::string const & s ): s(s) {

	this->n = s.length();
}

Data::Data( Data const & src ) {

	*this = src;
}

Data::~Data( void ) {}

Data &	Data::operator=( Data const & rhs ) {

	if (this != &rhs) {

		s = rhs.s;
		n = rhs.n;
	}

	return *this;
}

uintptr_t 	serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data *		deserialize(uintptr_t raw) {

	return reinterpret_cast<Data *>(raw);
}
