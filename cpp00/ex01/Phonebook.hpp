/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:43:32 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/01 23:29:21 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {

private:

	static const unsigned	_maxContacts = 8;
	unsigned				_nbContacts;
	unsigned				_oldestContactIndex;
	Contact					_contacts[8];

public:

	PhoneBook( void );
	~PhoneBook( void );

	void					addContact( void );
	void					searchContact( void );
	void					chooseContact( void );

};

#endif
