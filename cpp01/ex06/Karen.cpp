/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:52:17 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/30 18:52:40 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen( void ) {}

Karen::~Karen( void ) {}

void	Karen::complain( std::string level ) {

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*tab[4])();
	int			i;

	tab[0] = &Karen::debug;
	tab[1] = &Karen::info;
	tab[2] = &Karen::warning;
	tab[3] = &Karen::error;

	for (i = 0; i < 4; i++) {

		if (level == levels[i])
			break;

	}

	switch (i) {

		case 0:		(this->*tab[0])();

		case 1:		(this->*tab[1])();

		case 2:		(this->*tab[2])();

		case 3:		(this->*tab[3])();
					break;

		default:	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	}
}

void	Karen::debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl << std::endl;

}

void	Karen::info( void ) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough!" << std::endl;;
	std::cout << "If you did I would not have to ask for it!" << std::endl << std::endl;

}

void	Karen::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here ";
	std::cout << "for years and you just started working here last month." << std::endl << std::endl;

}

void	Karen::error( void ) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;

}
