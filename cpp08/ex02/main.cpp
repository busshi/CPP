/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:45:03 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/29 11:34:31 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int		givenMain( void ) {

	MutantStack<int>	mstack;

	std::cout << "Pushing 2 elements (5 and 17)..." << std::endl << "Stack:";
	mstack.push(5);
	mstack.push(17);

	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++) 
    	std::cout << " [ " << *it << " ]";

	std::cout << std::endl << "Stack Top: " << mstack.top() << std::endl;

	std::cout << "Stack size before pop: " << mstack.size() << std::endl;
	std::cout << std::endl << "Pop stack..." << std::endl;
	mstack.pop();
	std::cout << "Stack size after pop: " << mstack.size() << std::endl;
	std::cout << "New stack Top: " << mstack.top() << std::endl;

	std::cout << "Stack is now composed of:";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++) 
    	std::cout << " [ " << *it << " ]";

	std::cout << std::endl << std::endl << "Pushing 4 new elements (3, 5, 737, 0)..." << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "New stack size: " << mstack.size() << std::endl;
	std::cout << "New stack Top: " << mstack.top() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "Stack is now composed of:";
	while (it != ite) {

    	std::cout << " [ " << *it << " ]";
		++it;
	}

	std::cout << std::endl << std::endl << "Copying mstack into s..." << std::endl;
	std::stack<int> s(mstack);

	std::cout << "s stack size: " << s.size() << std::endl;
	std::cout << "s stack Top: " << s.top() << std::endl;
	
	return 0;
}

int		main( void ) {

	givenMain();

	return 0;
}
