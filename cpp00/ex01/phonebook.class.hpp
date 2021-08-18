/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:43:32 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/19 00:54:57 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include "contact.class.hpp"

class	PhoneBook {

public:

//	static int		nbContacts;
//	static int		maxContacts;
//	int		nbContacts;
//	int		maxContacts;

	PhoneBook( void );
	~PhoneBook( void );

	void	addContact( void );
	void	searchContact( void );

private:

	int		_nbContacts;
	int		_maxContacts;
	Contact	_contacts[8];

};

#endif
