/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:17:25 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/28 19:10:23 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

void	testing( std::vector<int> vec, int value ) {

	try {

		std::vector<int>::const_iterator	found = ::easyfind(vec, value);
		std::cout << "value [ " << value << " ]\tFound [ " << *found << " ]" << std::endl;
	}
	catch (std::exception & e) {

		std::cout << "value [ " << value << " ]\t" << e.what() << std::endl;
	}
}

void	tests( int n ) {

	std::vector<int>		vec(42);
	int						to_find[] = { -42, -41, -2, -1, 0, 24, 40, 42, 44, 82 };

	for (std::vector<int>::size_type i = 0; i < vec.size(); i++)
		vec[i] = i * n;

	for (int i = 0; i < 10; i++)
		testing(vec, to_find[i]);
}

int		main( void ) {

	std::cout << "\033[33mTEST index = value\033[0m" << std::endl;
	tests(1);
	std::cout << std::endl << "\033[33mTEST value = index * 2\033[0m" << std::endl;
	tests(2);
	std::cout << std::endl << "\033[33mTEST index = -value\033[0m" << std::endl;
	tests(-1);

	return 0;
}
