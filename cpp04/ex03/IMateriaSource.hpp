/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:29:59 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 18:55:50 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource {

	public:
		virtual 			~IMateriaSource( void ) {}

		virtual void		learnMateria( AMateria * ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;

};

#endif
