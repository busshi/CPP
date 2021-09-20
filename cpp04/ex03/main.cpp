/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:25:34 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/20 22:12:03 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main( void ) {

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);


	std::cout << std::endl << "Testing copy..." << std::endl;

	MateriaSource stackSrc(*dynamic_cast<MateriaSource *>(src));
	Character stackMe(*dynamic_cast<Character *>(me));

	stackSrc.learnMateria(new Ice());
	stackSrc.learnMateria(new Cure());

	AMateria *	newTmp;

	newTmp = stackSrc.createMateria("ice");
	stackMe.equip(newTmp);
	newTmp = stackSrc.createMateria("cure");
	stackMe.equip(newTmp);

	stackMe.use(0, *me);
	stackMe.use(1, *me);
	stackMe.use(2, *me);
	stackMe.use(3, *me);
	stackMe.use(4, *me);


	std::cout << std::endl << "Freeing allocated objects..." << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}
