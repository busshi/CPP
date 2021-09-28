/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:17:25 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/28 17:12:13 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

void	testing( std::vector<int> vec, int idx ) {

	try {

		std::vector<int>::const_iterator	found = ::easyfind(vec, idx);
		std::cout << "Index [ " << idx << " ] => [ " << *found << " ]" << std::endl;
	}
	catch (std::exception & e) {

		std::cout << "Index [ " << idx << " ] => " << e.what() << std::endl;
	}
}

void	testingInt( void ) {

	std::vector<int>		vec(42);
	int						idx[] = { 0, 24, 41, 42, 43, -1};;

	for (std::vector<int>::size_type i = 0; i < vec.size(); i++)
		vec[i] = i;

	for (int i = 0; i < 6; i++)
		testing(vec, idx[i]);
}

int		main( void ) {

	testingInt();

	return 0;
}
