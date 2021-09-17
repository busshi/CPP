/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:26:42 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/07 23:54:30 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

	public:
		WrongCat( void );
		WrongCat( WrongCat const & src );
		~WrongCat( void );

		WrongCat &	operator=( WrongCat const & rhs );

		void		makeSound( void ) const;

};

#endif
