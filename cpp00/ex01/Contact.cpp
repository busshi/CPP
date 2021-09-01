/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 00:01:47 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/01 23:29:51 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

const std::string	Contact::_categorie[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};

Contact::Contact( void ) {

	return;

}

Contact::~Contact( void ) {

	return;

}

void	Contact::addInfos( void ) {

	std::cout << "\nGive following informations to add a contact" << std::endl;
	for (int i = 0; i < 5; i++) {

		std::cout << Contact::_categorie[i] << ": ";
		std::getline (std::cin, _info[i]);
		if (!std::cin)
			break;
	
	}

}

void	Contact::getInfos( void ) {

	for (int i = 0; i < 5; i++) {

		std::cout << Contact::_categorie[i] << ": ";
		std::cout << _info[i] << std::endl;
	}
}

void	Contact::displayCategorie( unsigned i ) {

	std::cout << std::setw(10) << _categorie[i];

}

void	Contact::displayInfo( unsigned i ) {

	if ( _info[i].length() >= 10 )
		std::cout << std::setw(9) << _info[i].substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << _info[i];

}
