/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:25:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/20 19:32:26 by aldubar          ###   ########.fr       */
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

	if (nbContacts == maxContacts) {
		std::cout << "Your awesome phonebook already contains " << maxContacts << " contacts!!! ";
		std::cout << "Impossible to add another one..." << std::endl;
		return;
	}
	contacts[nbContacts].addInfos();
	nbContacts++;

}

void	PhoneBook::searchContact( void ) {

	unsigned	search;

	if (nbContacts == 0) {
		std::cout << "No contact in your awesome phonebook!!!" << std::endl;
		return;
	}
	chooseContact();
	std::cout << "\nWich index?" << std::endl;
	std::cin >> search;
	if (search < 0 || search > nbContacts - 1) {

		std::cout << "Index [" << search << "] is out of range! " << std::endl;
		std::cout << "Please choose an index between 0 and " << nbContacts - 1 << std::endl;

	}
	else
		contacts[search].getInfos();
	std::cin.clear();

}

void	PhoneBook::chooseContact( void ) {

	std::cout << "index | ";
	for (unsigned i = 0; i < 3; i++) {

		std::cout << contacts[0].categorie[i];
		if (i < 2)
			std::cout << " | ";

	}
	std::cout << std::endl;

	for (unsigned i = 0; i < nbContacts; i++) {

		std::cout << i << " | ";
		for (unsigned j = 0; j < 3; j++) {
			
			std::cout << contacts[i].info[j];
			if (j < 2)
				std::cout << " | ";

		}
		std::cout << std::endl;
	}
}
