/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:02:44 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 18:47:59 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character: public ICharacter {

	public:
		Character( std::string const & name = "default Character" );
		Character( Character const & src );
		~Character( void );

		Character &	operator=( Character const & rhs );

		std::string const &	getName( void ) const;
		void				equip( AMateria * m );
		void				unequip( int idx );
		void				use( int idx, ICharacter & target );

	private:
		std::string	_name;
		AMateria *	_materia[4];

		bool		validMateria( int idx );

};

#endif
