/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:49:44 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/23 12:50:33 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int		main( void ) {

	std::string	input;
	PhoneBook	phoneBook;

	std::cout << "--- AWESOME PHONEBOOK ---" << std::endl << std::endl;
	std::cout << "ADD, SEARCH or EXIT" << std::endl;
	while (std::getline (std::cin, input))
	{
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input == "EXIT") {
			std::cout << std::endl << "Closing awesome phonebook..." << std::endl;
			return 0;
		}
		else
			std::cout << std::endl << "The command " << input << " is not authorized!" << std::endl;

		if (std::cin)
			std::cout << std::endl << "ADD, SEARCH or EXIT" << std::endl;
	}
	
	return 0;

}
