/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:19:07 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 21:52:00 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap( name ) {
	
	std::cout << "Default ScavTrap constructor called" << std::endl;

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

}

ScavTrap::ScavTrap (ScavTrap const & src ) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;

}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap destructor called" << std::endl;

}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {

	std::cout << "ScavTrap assignation operator called" << std::endl;

	if (this != &rhs) {

		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}

	return *this;
}

void		ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap " << this->_name << " have entered in Gate keeper mode" << std::endl;

}
