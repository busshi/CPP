/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:35:50 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 00:04:29 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie( void ) {

		std::cout << "<" << this->_name << "> is no more!" << std::endl;

}

void	Zombie::announce( void ) {

		std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;

}
