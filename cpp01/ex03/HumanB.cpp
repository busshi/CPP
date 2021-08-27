/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:07:21 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 11:39:10 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string const & name ) : _name( name ), _weapon( NULL ) {}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void ) {

		if (_weapon == NULL) {

			std::cout << this->_name;
			std::cout <<  " attacks with his spirit because he doesn't have any weapon!";
			std::cout << std::endl;

		}
		else
			std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;	

}

void	HumanB::setWeapon( Weapon const & weapon ) {

		this->_weapon = &weapon;

}
