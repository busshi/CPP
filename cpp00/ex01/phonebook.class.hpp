/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:43:32 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/20 22:26:47 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.class.hpp"

class	PhoneBook {

public:

	static const unsigned	maxContacts = 8;
	unsigned				nbContacts;
	Contact					contacts[8];

	PhoneBook( void );
	~PhoneBook( void );

	void					addContact( void );
	void					searchContact( void );
	void					chooseContact( void );

};

#endif
