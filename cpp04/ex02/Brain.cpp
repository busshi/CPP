/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:25:43 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 10:22:50 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void ) {

	std::cout << "Brain default constructor called" << std::endl;

}

Brain::Brain( Brain const & src ) {

	std::cout << "Brain copy constructor called" << std::endl;

	*this = src;

}

Brain::~Brain( void ) {

	std::cout << "Brain destructor called" << std::endl;

}

Brain &	Brain::operator=( Brain const & rhs ) {

	std::cout << "Brain assignation operator called" << std::endl;

	if (this != &rhs) {

		for (int i = 0; i < 100; i++) {

			this->_ideas[i] = rhs._ideas[i];
		
		}
	}

	return *this;

}
