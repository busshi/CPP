/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:27:42 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 10:33:42 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int		main( void ) {

		int					N = 10;
		std::string const	name = "Heap zombie";

		Zombie*	horde = zombieHorde( N, name );

		for (int i = 0; i < N; i++) {
		
			horde[i].announce();
		}

		delete [] horde;

		return 0;

}
