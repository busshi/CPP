/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:52:17 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/30 14:03:38 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen( void ) {}

Karen::~Karen( void ) {}

void	Karen::complain( std::string level ) {

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*tab[4])();

	tab[0] = &Karen::debug;
	tab[1] = &Karen::info;
	tab[2] = &Karen::warning;
	tab[3] = &Karen::error;

	for (int i = 0; i < 4; i++) {

		if (level == levels[i]) {
			
			(this->*tab[i])();
			break;
		}
	}
}

void	Karen::debug( void ) {

	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!" << std::endl;

}

void	Karen::info( void ) {

	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! ";
	std::cout << "If you did I would not have to ask for it!" << std::endl;

}

void	Karen::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here ";
	std::cout << "for years and you just started working here last month." << std::endl;

}

void	Karen::error( void ) {

	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;

}
