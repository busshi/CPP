/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:28:58 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/26 23:00:02 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie {

public:
		Zombie();
		Zombie( std::string name );
		~Zombie( void );

		void		giveName( std::string name );
		void		announce( void );

private:
		std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif
