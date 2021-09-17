/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:25:43 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/14 11:39:41 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void ) {

	std::cout << "Default constructor called" << std::endl;

}

Brain::Brain( Brain const & src ) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;

}

Brain::~Brain( void ) {

	std::cout << "Destructor called" << std::endl;

}

Brain &	Brain::operator=( Brain const & rhs ) {

	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs) {

		for (int i = 0; i < 100; i++) {

			this->ideas[i] = rhs.ideas[i];
		
		}
	}

	return *this;

}
