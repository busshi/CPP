/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:10:49 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 18:49:41 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure: public AMateria {

	public:
		Cure( void );
		Cure( Cure const & src );
		~Cure( void );

		Cure &	operator=( Cure const & rhs );

		Cure *	clone( void ) const;
		void	use( ICharacter & target );

	private:
};

#endif
