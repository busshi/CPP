/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:05:13 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 16:36:15 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( std::string const & name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "Default ClapTrap constructor called" << std::endl;

}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;

}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ) {

	std::cout << "ClapTrap assignation operator called" << std::endl;

	if (this != &rhs) {

		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	
	}

	return *this;
}

void	ClapTrap::attack( std::string const & target ) {

	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing ";
	std::cout << this->_attackDamage << " points of damage!" << std::endl;

}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << "ClapTrap " << this->_name << " take damage: " << amount << " points :(" << std::endl;

}

void	ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << "ClapTrap " << this->_name << " is repaired of " << amount << " points :)" << std::endl;

}
