/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:27:42 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/26 22:06:14 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void ) {

		Zombie*	heapZombie = newZombie("heapZombie");

		heapZombie->announce();
		delete heapZombie;
		randomChump("stackZombie");

		return 0;

}
