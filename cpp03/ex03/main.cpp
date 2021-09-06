/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:20:04 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/06 15:57:55 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
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

void	frag( void) {

	FragTrap	frog("Frog");
	FragTrap	anonymousFrag;

	frog.attack("a duck");
	frog.takeDamage(420);
	frog.beRepaired(210);
	frog.highFivesGuys();
	std::cout << std::endl;
	anonymousFrag.attack("a good boy");
	anonymousFrag.takeDamage(10000);
	anonymousFrag.beRepaired(5000);
	anonymousFrag.highFivesGuys();
	std::cout << std::endl;

	anonymousFrag = frog;

	std::cout << std::endl;
	anonymousFrag.attack("an angel");
	anonymousFrag.takeDamage(9999);
	anonymousFrag.beRepaired(6666);
	anonymousFrag.highFivesGuys();
	std::cout << std::endl;

}

void	diamond( void ) {

	DiamondTrap	gold("gold");

	std::cout << std::endl;
	gold.attack("a jewel");
	gold.takeDamage(100000);
	gold.beRepaired(999999);
	gold.whoAmI();
	gold.highFivesGuys();
	gold.guardGate();
	std::cout << std::endl;
}

int		main( void ) {

	std::cout << "--- Testing CLAPTRAP ---" << std::endl << std::endl;
	clap();

	std::cout << std::endl << "--- Testing SCAVTRAP ---" << std::endl << std::endl;
	scav();

	std::cout << std::endl << "--- Testing FRAGTRAP ---" << std::endl << std::endl;
	frag();

	std::cout << std::endl << "--- Testing DIAMONDTRAP ---" << std::endl << std::endl;
	diamond();

	return 0;
}
