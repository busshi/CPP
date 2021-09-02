/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 22:23:08 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 22:45:47 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string const & name ) : ClapTrap( name ) {

	std::cout << "Default FragTrap constructor called" << std::endl;

	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

}

FragTrap::FragTrap( FragTrap const & src ) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;

}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap destructor called" << std::endl;

}

FragTrap &	FragTrap::operator=( FragTrap const & rhs ) {

	std::cout << "FragTrap assignation operator called" << std::endl;

	if (this != &rhs) {

			this->_name = rhs._name;
			this->_hitPoints = rhs._hitPoints;
			this->_energyPoints = rhs._energyPoints;
			this->_attackDamage = rhs._attackDamage;

	}

	return *this;

}

void		FragTrap::highFivesGuys( void ) {

	std::cout << "🖐  Gimme 5 🖐" << std::endl;

}
