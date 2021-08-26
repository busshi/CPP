/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:35:50 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/26 22:04:40 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ) : _name(name) {

//		announce();

}

Zombie::~Zombie( void ) {

		std::cout << "<" << _name << "> is no more!" << std::endl;

}

void	Zombie::announce( void ) {

		std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;

}
