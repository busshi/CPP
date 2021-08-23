/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 00:01:08 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/20 18:54:55 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

class	Contact {

public:

	static const std::string	categorie[5];
	std::string					info[5];

	Contact( void );
	~Contact( void );

	void	addInfos( void );
	void	getInfos( void );

};

#endif
