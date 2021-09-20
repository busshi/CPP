/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:02:44 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 19:32:43 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( std::string const & name ): _name(name), _materia() {

	std::cout << "Character Default constructor called" << std::endl;

}

Character::Character( Character const & src ): _materia() {

	std::cout << "Character Copy constructor called" << std::endl;

	*this = src;

}

Character::~Character( void ) {

	std::cout << "Character Destructor called" << std::endl;

	for (int i = 0; i < 4; i++) {

		delete _materia[i];
	}

}

Character &	Character::operator=( Character const & rhs ) {

	std::cout << "Character Assignation operator called" << std::endl;

	if (this != &rhs) {
		this->_name = rhs._name;
		
		for (int i = 0; i < 4; i++) {

			delete _materia[i];
			if (rhs._materia[i]) {

				this->_materia[i] = rhs._materia[i]->clone();
			}
		}
	
	}
	return *this;

}

std::string const &	Character::getName( void ) const {

	return this->_name;

}

bool	Character::validMateria( int idx ) {

	if (idx >= 0 && idx < 4 && this->_materia[idx])
		return true;

	else
		return false;

}

void	Character::equip( AMateria *m) {

	for (int i = 0; i < 4; i++) {

		if (this->_materia[i] == m)
			return ;
	}

	for (int i = 0; i < 4; i++) {

		if (!this->_materia[i]) {

			this->_materia[i] = m;
			return ;
		}
	}
}

void	Character::unequip( int idx ) {

	if (validMateria( idx ))
		this->_materia[idx] = 0;

}

void	Character::use( int idx, ICharacter & target ) {

	if (validMateria( idx ))
		this->_materia[idx]->use(target);

}
