/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:27:42 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/26 23:05:45 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int		main( int ac, char **av ) {

		int		N;

		if (ac != 3) {

			std::cout << "Usage: ./moarBrainz [nb of zombies] [name]" << std::endl;
			return 1;

		}
		try {
		
			N = std::stoi( av[1] );
		
		} catch(std::invalid_argument) {

			std::cout << "First argument must be a positive integer" << std::endl;
			return 1;
		}

		if (N <= 0) {

			std::cout << "First argument must be an integer greater than 0" << std::endl;
			return 1;

		}
		Zombie*	horde = zombieHorde( N, av[2] );

		for (int i = 0; i < N; i++) {
		
			horde[i].announce();
		}

		delete [] horde;

		return 0;

}
