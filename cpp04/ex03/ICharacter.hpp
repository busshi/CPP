/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:26:49 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 18:50:51 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

class	AMateria;

class	ICharacter {

	public:
		virtual ~ICharacter( void ) {}

		virtual	std::string const &	getName( void ) const = 0;
		virtual void				equip( AMateria* m) = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				use( int idx, ICharacter & target ) = 0;

};

#endif
