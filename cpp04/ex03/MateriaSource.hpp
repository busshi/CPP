/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:18:35 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 18:38:06 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource: public IMateriaSource {

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		~MateriaSource( void );

		MateriaSource &	operator=( MateriaSource const & rhs );

		void		learnMateria( AMateria *);
		AMateria *	createMateria( std::string const & type );

	private:
		AMateria *	_m[4];
};

#endif
