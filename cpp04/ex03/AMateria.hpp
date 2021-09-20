/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:08:37 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 19:11:13 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class	AMateria {

	public:
		AMateria( std::string const & type );
		AMateria( AMateria const & src );
		virtual ~AMateria( void );

		AMateria &	operator=( AMateria const & rhs );

		std::string const &	getType( void ) const;

		virtual AMateria*	clone( void) const = 0;
		virtual void		use( ICharacter & target );

	protected:
		std::string	_type;
};

#endif
