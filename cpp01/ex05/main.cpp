/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:29 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/30 13:22:14 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main( void ) {

	Karen	karen;

	std::cout << "\033[36mDEBUG: \033[0m";
	karen.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "\033[34mINFO: \033[0m";
	karen.complain("INFO");
	std::cout << std::endl;

	std::cout << "\033[33mWARNING: \033[0m";
	karen.complain("WARNING");
	std::cout << std::endl;

	std::cout << "\033[31mERROR: \033[0m";
	karen.complain("ERROR");

	return 0;	

}
