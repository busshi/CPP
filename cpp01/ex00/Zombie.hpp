/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:28:58 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/26 21:43:15 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie {

public:
		Zombie( std::string name );
		~Zombie( void );

		void		announce( void );

private:
		std::string	_name;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
