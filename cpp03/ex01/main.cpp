/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:20:04 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/02 22:15:11 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void	clap( void ) {
	
	ClapTrap	fighter("figther");
	ClapTrap	anonymousClap;

	fighter.attack("evil");
	fighter.takeDamage(5);
	fighter.beRepaired(5);
	std::cout << std::endl;
	anonymousClap.attack("everybody");
	anonymousClap.takeDamage(100);
	anonymousClap.beRepaired(1000);
	std::cout << std::endl;

	anonymousClap = fighter;

	std::cout << std::endl;
	anonymousClap.attack("somebody");
	anonymousClap.takeDamage(0);
	anonymousClap.beRepaired(0);
	std::cout << std::endl;

}

void	scav( void ) {

	ScavTrap	serena("Serena");
	ScavTrap	anonymousScav;

	serena.attack("herself");
	serena.takeDamage(42);
	serena.beRepaired(42);
	serena.guardGate();
	std::cout << std::endl;
	anonymousScav.attack("a bad boy");
	anonymousScav.takeDamage(4242);
	anonymousScav.beRepaired(2424);
	anonymousScav.guardGate();
	std::cout << std::endl;

	anonymousScav = serena;

	std::cout << std::endl;
	anonymousScav.attack("somebody");
	anonymousScav.takeDamage(0);
	anonymousScav.beRepaired(0);
	anonymousScav.guardGate();
	std::cout << std::endl;

}

int		main( void ) {

	std::cout << "--- Testing CLAPTRAP ---" << std::endl << std::endl;
	clap();

	std::cout << std::endl << "--- Testing SCAVTRAP ---" << std::endl << std::endl;
	scav();

	return 0;
}
