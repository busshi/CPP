/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:18:35 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 20:20:52 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource( void ): _m() {

	std::cout << "MateriaSource Default constructor called" << std::endl;

}

MateriaSource::MateriaSource( MateriaSource const & src ): _m() {

	std::cout << "MateriaSource Copy constructor called" << std::endl;

	*this = src;

}

MateriaSource::~MateriaSource( void ) {

	std::cout << "MateriaSource Destructor called" << std::endl;

	for (int i = 0; i < 4; i++) {

		delete _m[i];
	}

}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs ) {

	std::cout << "MateriaSource Assignation operator called" << std::endl;

	if (this != &rhs) {

		for (int i = 0; i < 4; i++) {
			
			delete _m[i];
			if (rhs._m[i])
				this->_m[i] = rhs._m[i]->clone();
			else
				this->_m[i] = 0;
		}
	}

	return *this;

}

void	MateriaSource::learnMateria( AMateria * m ) {

	for (int i = 0; i < 4; i++) {

		if (this->_m[i] == m)
			return ;
	}

	for (int i = 0; i < 4; i++) {

		if (!this->_m[i]) {

			this->_m[i] = m;
			return ;
		}
	}
}

AMateria *	MateriaSource::createMateria( std::string const & type ) {

	for (int i = 0; i < 4; i++) {

		if (this->_m[i] && this->_m[i]->getType() == type)
			return this->_m[i]->clone();
	}

	return 0;
}
