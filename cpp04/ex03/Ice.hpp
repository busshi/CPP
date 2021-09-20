/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:04:19 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 19:01:08 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice: public AMateria {

	public:
		Ice( void );
		Ice( Ice const & src );
		~Ice( void );

		Ice &	operator=( Ice const & rhs );

		Ice *	clone( void ) const;
		void	use( ICharacter & target );

};

#endif
