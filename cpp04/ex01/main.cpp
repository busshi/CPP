/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:24:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 11:06:59 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main() {
	
    const Animal*		meta = new Animal();

	std::cout << "new Animal: " << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << std::endl;

    const Animal*		j = new Dog();

	std::cout << "new Animal: " << j->getType() << std::endl;
	j->makeSound();
	delete j;
	std::cout << std::endl;

    const Animal*		i = new Cat();

	std::cout << "new Animal: " << i->getType() << std::endl;
	i->makeSound();
	delete i;
	std::cout << std::endl;

	std::cout << "Creating an array of half dogs half cats..." << std::endl << std::endl;

	Animal *		array[4];
	for (int i = 0; i < 4; i++) {

		if (i % 2)
			array[i] = new Cat;
		else
			array[i] = new Dog;
		
		std::cout << std::endl;
	}


	std::cout << std::endl << "Testing deep copy of Cat..." << std::endl << std::endl;

	Cat originalCat;

	std::cout << std::endl << "Copying the original Cat..." << std::endl << std::endl;

	Cat	copyCat(originalCat);

	std::cout << std::endl << originalCat.getBrain() << " <--- ORIGINAL CAT VS COPY CAT ---> ";
	std::cout << copyCat.getBrain() << std::endl << std::endl;


	std::cout << std::endl << "Testing deep copy of Dog..." << std::endl << std::endl;

	Dog originalDog;

	std::cout << std::endl << "Copying the original Dog..." << std::endl << std::endl;
	
	Dog	copyDog(originalDog);

	std::cout << std::endl << originalDog.getBrain() << " <--- ORIGINAL DOG VS COPY DOG ---> ";
	std::cout << copyDog.getBrain() << std::endl << std::endl;


	std::cout << "Deleting the array of half dogs half cats..." << std::endl << std::endl;

	for (int i = 0; i < 4; i++) {

		delete array[i];
		std::cout << std::endl;
	}

	return 0;

}
