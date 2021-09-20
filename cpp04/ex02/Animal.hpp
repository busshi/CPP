/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 11:48:31 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	Animal {

	public:
		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );

		Animal &	operator=( Animal const & rhs );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;

	protected:
		std::string	_type;

};

#endif
