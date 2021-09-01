/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:25:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/01 23:29:04 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook( void ) {

	_nbContacts = 0;
	_oldestContactIndex = 0;

}

PhoneBook::~PhoneBook( void ) {

	return;

}

void	PhoneBook::addContact( void ) {

	unsigned	index = _nbContacts;

	if (_nbContacts == _maxContacts) {

		index = _oldestContactIndex;
		if (_oldestContactIndex >= 7)
			_oldestContactIndex = 0;
		else
			_oldestContactIndex++;

	}
	_contacts[index].addInfos();
	if (_nbContacts < 8)
		_nbContacts++;

}

void	PhoneBook::searchContact( void ) {

	unsigned	search;

	chooseContact();
	std::cout << std::endl;
	if (_nbContacts == 0) {

		std::cout << "No contact in your awesome phonebook!!!" << std::endl;
		return;
	
	}
	
	std::cout << "Which index?" << std::endl;
	while (!(std::cin >> search) || search < 0 || search > _nbContacts - 1) {

			std::cout << "Wrong input! Please choose an index between 0 and ";
			std::cout << _nbContacts - 1 << "." << std::endl;
			std::cin.clear();
			std::cin.ignore(1024, '\n');

	}
	_contacts[search].getInfos();
	std::cin.ignore(1024, '\n');

}

void	PhoneBook::chooseContact( void ) {

	std::cout << std::endl << "|";
	std::cout << std::setw(10) << "index";
	for (unsigned i = 0; i < 3; i++) {

		std::cout << "|";
		_contacts[0].displayCategorie( i );

	}
	std::cout << "|";
	std::cout << std::endl;

	for (unsigned i = 0; i < _nbContacts; i++) {

		std::cout << "|";
		std::cout << std::setw(10) << i ;
		for (unsigned j = 0; j < 3; j++) {
			
			std::cout << "|";
			_contacts[i].displayInfo( j );

		}
		std::cout << "|";
		std::cout << std::endl;

	}
}
