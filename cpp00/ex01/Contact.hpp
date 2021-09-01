/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 00:01:08 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/01 23:31:26 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact {

private:

	std::string					_info[5];
	static const std::string	_categorie[5];


public:

	Contact( void );
	~Contact( void );

	void	addInfos( void );
	void	getInfos( void );
	void	displayCategorie( unsigned i );
	void	displayInfo( unsigned i );

};

#endif
