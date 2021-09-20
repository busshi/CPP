/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:24:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 16:41:30 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main() {

//	Uncomment the next line to verify that Animal is an abstract Class
//	Animal		animal;

	Cat		cat;
	Animal	*animal = &cat;

	std::cout << "new Animal: " << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << std::endl;

	Dog		dog;
	animal = &dog;

	std::cout << "new Animal: " << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << std::endl;

	return 0;

}
