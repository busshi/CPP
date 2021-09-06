/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 09:42:19 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/06 09:25:31 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string const & name ) : ClapTrap( name + "_clap_name" ), FragTrap( name ), ScavTrap( name ) {

	std::cout << "Default DiamondTrap constructor called" << std::endl;

	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	this->_name = name;

}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;

	*this = src;

}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap destructor called" << std::endl;

}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs ) {

	std::cout << "DiamondTrap assignation operator called" << std::endl;

	if (this != &rhs) {

		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;

	}

	return *this;
}

void			DiamondTrap::whoAmI( void ) {

	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;

}
