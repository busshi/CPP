/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:49:44 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/20 17:37:55 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int		main( void ) {

	std::string	input;
	PhoneBook	phoneBook;

	std::cout << "--- AWESOME PHONEBOOK ---" << std::endl;
	while (input != "EXIT")
	{
		if (phoneBook.nbContacts == phoneBook.maxContacts)
			std::cout << "\nSEARCH or EXIT" << std::endl;
		else
			std::cout << "\nADD, SEARCH or EXIT" << std::endl;
		std::getline (std::cin, input);
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input == "EXIT")
			std::cout << "\nClosing awesome phonebook..." << std::endl;
		else
			std::cout << "\nThe command " << input << " is not authorized!" << std::endl;
	}
	
	return 0;

}
