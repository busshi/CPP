/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 22:10:41 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/26 22:58:53 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {

	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
	
		horde[i].giveName(name);

	}

	return horde;

}
