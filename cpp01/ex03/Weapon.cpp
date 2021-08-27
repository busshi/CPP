/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 10:39:58 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 11:00:40 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string const & type ) : _type(type) {}

Weapon::~Weapon( void ) {}

std::string const &	Weapon::getType( void ) const {

		return this->_type;

}

void	Weapon::setType( std::string const &type ) {

		this->_type = type;

}
