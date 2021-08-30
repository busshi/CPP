/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:29 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/30 18:19:04 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main( int ac, char **av ) {

	if (ac != 2) {

		std::cout << "Usage: ./karenFilter [log level]" << std::endl;
		return 1;

	}

	Karen	karen;

	karen.complain(av[1]);

	return 0;	

}
