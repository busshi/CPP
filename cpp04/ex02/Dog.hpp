/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:22:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 10:36:34 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {

	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );

		Dog &	operator=( Dog const & rhs );

		void	makeSound( void ) const;
		Brain*	getBrain( void );

	private:
		Brain*	_brain;

};

#endif
