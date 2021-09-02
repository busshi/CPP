/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:20:04 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 16:14:42 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int		main( void ) {

	ClapTrap	fighter("figther");
	ClapTrap	anonymous;

	std::cout << std::endl;

	fighter.attack("evil");
	fighter.takeDamage(5);
	fighter.beRepaired(5);

	std::cout << std::endl;

	anonymous.attack("everybody");
	anonymous.takeDamage(100);
	anonymous.beRepaired(1000);

	std::cout << std::endl;

	anonymous = fighter;

	std::cout << std::endl;
	
	anonymous.attack("somebody");
	anonymous.takeDamage(0);
	anonymous.beRepaired(0);

	std::cout << std::endl;

	return 0;
}
