/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:25:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/17 21:54:09 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	add_contact(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

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

void	search_contact(void)
{
	std::string	search;

	std::cout << "\nWhich contact?" << std::endl;
	std::cout << search << std::endl;
}

int		main(int ac, char **av)
{
	std::string	input;

	std::cout << "--- AWESOME PHONEBOOK ---" << std::endl;
	while (input != "EXIT")
	{
		std::cout << "\nADD, SEARCH or EXIT" << std::endl;
		std::getline (std::cin, input);
		if (input == "ADD")
			add_contact();
		else if (input == "SEARCH")
			search_contact();
		else if (input == "EXIT")
			std::cout << "\nClosing awesome phonebook..." << std::endl;
		else
			std::cout << "\nThe command " << input << " is not authorized!" << std::endl;
	}
	return 0;
}
