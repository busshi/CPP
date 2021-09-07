/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:24:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/08 00:16:54 by aldubar          ###   ########.fr       */
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

	const WrongAnimal*	wAnimal = new WrongAnimal();
	std::cout << "new Animal: " << wAnimal->getType() << std::endl;
	wAnimal->makeSound();
	delete wAnimal;
	std::cout << std::endl;

	const WrongCat*		wCat = new WrongCat();
	std::cout << "new Animal: " << wCat->getType() << std::endl;
	wCat->makeSound();
	delete wCat;
	std::cout << std::endl;

	const WrongAnimal*	wrongAnimal = new WrongCat();
	std::cout << "new Animal: " << wrongAnimal->getType() << std::endl;
	wrongAnimal->makeSound();
	delete wrongAnimal;

	return 0;

}
