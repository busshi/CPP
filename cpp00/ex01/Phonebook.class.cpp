/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:25:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/21 00:48:37 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

PhoneBook::PhoneBook( void ) {

	nbContacts = 0;

}

PhoneBook::~PhoneBook( void ) {

	return;

}

void	PhoneBook::addContact( void ) {

	unsigned	index = nbContacts;

	if (nbContacts == maxContacts)
		index = 0;
	contacts[index].addInfos();
	if (nbContacts < 8)
		nbContacts++;

}

void	PhoneBook::searchContact( void ) {

	unsigned	search;

	chooseContact();
	std::cout << std::endl;
	if (nbContacts == 0) {

		std::cout << "No contact in your awesome phonebook!!!" << std::endl;
		return;
	
	}
	
	std::cout << "Which index?" << std::endl;
	while (!(std::cin >> search) || search < 0 || search > nbContacts - 1) {

			std::cout << "Wrong input! Please choose an index between 0 and ";
			std::cout << nbContacts - 1 << "." << std::endl;
			std::cin.clear();
			std::cin.ignore(1024, '\n');

	}
	contacts[search].getInfos();
	std::cin.ignore(1024, '\n');

}

void	PhoneBook::chooseContact( void ) {

	std::cout << std::endl << "|";
	std::cout << std::setw(10) << "index";
	for (unsigned i = 0; i < 3; i++) {

		std::cout << "|";
		std::cout << std::setw(10) << contacts[0].categorie[i];

	}
	std::cout << "|";
	std::cout << std::endl;

	for (unsigned i = 0; i < nbContacts; i++) {

		std::cout << "|";
		std::cout << std::setw(10) << i ;
		for (unsigned j = 0; j < 3; j++) {
			
			std::cout << "|";
			if (contacts[i].info[j].length() >= 10)
				std::cout << std::setw(9) << contacts[i].info[j].substr(0, 9) << ".";
			else
				std::cout << std::setw(10) << contacts[i].info[j];

		}
		std::cout << "|";
		std::cout << std::endl;

	}
}
