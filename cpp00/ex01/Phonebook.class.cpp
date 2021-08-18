/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:25:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/19 01:01:36 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

PhoneBook::PhoneBook( void ) {

	_nbContacts = 0;
	_maxContacts = 8;

}

PhoneBook::~PhoneBook( void ) {

	return;

}

void	PhoneBook::addContact( void ) {

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	if (_nbContacts == _maxContacts) {
		std::cout << "Your awesome phonebook already contains " << _maxContacts << " contacts!!! ";
		std::cout << "Impossible to add another one..." << std::endl;
	}
	else {
		std::cout << "\nGive following informations to add a contact" << std::endl;
		std::cout << "first name: ";
		std::getline (std::cin, first_name);
		std::cout << "last name: ";
		std::getline (std::cin, last_name);
		std::cout << "nickname: ";
		std::getline (std::cin, nickname);
		std::cout << "phone number: ";
		std::getline (std::cin, phone_number);
		std::cout << "darkest_secret: ";
		std::getline (std::cin, darkest_secret);
		std::cout << first_name << " " << last_name << " " << nickname << " ";
		std::cout << phone_number << " " << darkest_secret << std::endl;
	}

}

void	PhoneBook::searchContact( void ) {

	std::string	search;

	if (_nbContacts == 0) {
		std::cout << "No contact in your awesome phonebook!!!" << std::endl;
		return;
	}
	std::cout << "\nWich contact?" << std::endl;
	std::getline (std::cin, search);
	std::cout << search << std::endl;

}
