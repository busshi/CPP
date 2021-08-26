/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 00:01:47 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/23 12:49:38 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

const std::string	Contact::categorie[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};

Contact::Contact( void ) {

	return;

}

Contact::~Contact( void ) {

	return;

}

void	Contact::addInfos( void ) {

	std::cout << "\nGive following informations to add a contact" << std::endl;
	for (int i = 0; i < 5; i++) {

		std::cout << Contact::categorie[i] << ": ";
		std::getline (std::cin, info[i]);
		if (!std::cin)
			break;
	
	}

}

void	Contact::getInfos( void ) {

	for (int i = 0; i < 5; i++) {

		std::cout << Contact::categorie[i] << ": ";
		std::cout << info[i] << std::endl;
	}
}