/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:36:23 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/07 23:53:37 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class	WrongAnimal {

	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal( void );

		WrongAnimal &	operator=( WrongAnimal const & rhs );

		void			makeSound( void ) const;
		std::string		getType( void ) const;

	protected:
		std::string		_type;

};

#endif
