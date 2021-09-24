/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:31:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 14:22:57 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>
# include <stdint.h>

struct  Data {

    std::string	s;
    int			n;

	Data( std::string const & s = "" );
	Data( Data const & src );
	~Data( void );
	
	Data & operator=( Data const & rhs );
};

uintptr_t 	serialize( Data * ptr );
Data *		deserialize( uintptr_t raw );

#endif
