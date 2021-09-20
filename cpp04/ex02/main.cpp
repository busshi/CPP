/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:24:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 12:06:18 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main() {

//	Uncomment the next line to verify that Animal is an abstract Class
//    const Animal*		meta = new Animal();

    const Animal*		j = new Dog();

	std::cout << "new Animal: " << j->getType() << std::endl;
	j->makeSound();
	delete j;
	std::cout << std::endl;

    const Animal*		i = new Cat();

	std::cout << "new Animal: " << i->getType() << std::endl;
	i->makeSound();
	delete i;

	return 0;

}
