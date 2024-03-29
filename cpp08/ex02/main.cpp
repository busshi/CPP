/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:45:03 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/29 17:59:53 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <iomanip>
#include <list>

int		testingGivenMain( void ) {

	MutantStack<int>	mstack;

	std::cout << "\033[33mTests given in the subject...\033[0m" << std::endl;
	std::cout << "Creating a stack and push 2 elements (5 and 17)" << std::endl << "Stack:";
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

	std::cout << std::endl << std::endl << "Pushing 4 new elements (3, 5, 737, 0)" << std::endl;
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

void	additionnalTests( void ) {

	MutantStack<int>	s;

	std::cout << std::endl << "\033[33mAdditionnal tests...\033[0m" << std::endl;
	std::cout << "Creating an empty stack and check if it is empty: ";

	if (s.empty())
		std::cout << "[\033[32m OK \033[0m] Empty" << std::endl;
	else
		std::cout << "[\033[31m KO \033[0m] Not empty" << std::endl;

	std::cout << "Stack size: " << s.size() << std::endl;

	std::cout << std::endl << "Pushing 10 elements..." << std::endl;
	for (int i = 0; i < 10; i++)
		s.push(i);
	std::cout << "Stack: ";
	for (MutantStack<int>::iterator it = s.begin(); it != s.end(); it++) 
    	std::cout << " [ " << *it << " ]";
	
	std::cout << std::endl << "Check if stack is empty or not: ";
	if (!s.empty())
		std::cout << "[\033[32m OK \033[0m] Not empty" << std::endl;
	else
		std::cout << "[\033[31m KO \033[0m] Empty" << std::endl;

	std::cout << "Stack size: " << s.size() << std::endl;
	std::cout << "Stack Top: " << s.top() << std::endl;

	for (int j = 0; j < 2; j++) {
	
	std::cout << std::endl << "Pop 5 elements..." << std::endl;
		for (int i = 0; i < 5; i++)
			s.pop();
		std::cout << "Stack: ";
		for (MutantStack<int>::iterator it = s.begin(); it != s.end(); it++) 
	    	std::cout << " [ " << *it << " ]";

		std::cout << std::endl << "Stack size: " << s.size() << std::endl;

		std::cout << "Check if stack is empty or not: ";
		if (!s.empty()) {

			std::cout << "[ Not empty ]" << std::endl;
			std::cout << "Stack Top: " << s.top() << std::endl;
		}
		else
			std::cout << "[ Empty ]" << std::endl;
	}
}

void	testingList( void ) {

	MutantStack<int>	m;
	std::list<int>		l;

	std::cout << std::endl << "\033[33mComparing MutantStack with std::list...\033[0m" << std::endl;

	for (int i = 0; i < 42; i++)
		m.push(i * 2);

	std::cout << "Mutant Stack:";
	for (MutantStack<int>::const_iterator it = m.begin(); it != m.end(); it++) 
	   	std::cout << " [ " << *it << " ]";

	for (int i = 0; i < 42; i++)
		l.push_back(i * 2);

	std::cout << std::endl << std::endl << "List:";
	for (std::list<int>::const_iterator it = l.begin(); it != l.end(); it++) 
	   	std::cout << " [ " << *it << " ]";
}

void	testingReverseIterator( void ) {

	MutantStack<int>	m;

	std::cout << std::endl << std::endl << "\033[33mTesting reverse iterator...\033[0m" << std::endl;
	for (int i = 1; i <= 42; i++)
		m.push(i);

	std::cout << "Stack:";
	for (MutantStack<int>::const_iterator it = m.begin(); it != m.end(); it++) 
	   	std::cout << " [ " << *it << " ]";
	
	std::cout << std::endl << std::endl << "Reverse Stack:";
	for (MutantStack<int>::const_reverse_iterator it = m.rbegin(); it != m.rend(); it++) 
	   	std::cout << " [ " << *it << " ]";
}

void	testingCopy( void ) {

	MutantStack<int>	orig;

	std::cout << std::endl << std::endl << "\033[33mTesting copy not altering original...\033[0m" << std::endl;
	for (int i = 1; i <= 10; i++)
		orig.push(i);

	std::cout << std::left << std::setw(15) << "Original stack:";
	for (MutantStack<int>::const_iterator it = orig.begin(); it != orig.end(); it++) 
	   	std::cout << " [ " << *it << " ]";

	MutantStack<int>	copy(orig);
	
	std::cout << std::endl << std::left << std::setw(15) << "Copy stack:";
	for (MutantStack<int>::const_iterator it = copy.begin(); it != copy.end(); it++) 
	   	std::cout << " [ " << *it << " ]";

	std::cout << std::endl << std::endl << "Modifying original stack..." << std::endl;
	for (int i = 1; i <= 5; i++)
		orig.pop();

	std::cout << std::left << std::setw(25) << "Original stack modified:";
	for (MutantStack<int>::const_iterator it = orig.begin(); it != orig.end(); it++) 
	   	std::cout << " [ " << *it << " ]";

	std::cout << std::endl << std::left << std::setw(25) << "Copy stack:";
	for (MutantStack<int>::const_iterator it = copy.begin(); it != copy.end(); it++) 
	   	std::cout << " [ " << *it << " ]";
	
	std::cout << std::endl << std::endl << "Testing operator =" << std::endl;

	MutantStack<int>	copy2 = orig;

	std::cout << std::left << std::setw(15) << "Original stack:";
	for (MutantStack<int>::const_iterator it = orig.begin(); it != orig.end(); it++) 
	   	std::cout << " [ " << *it << " ]";

	std::cout << std::endl << std::left << std::setw(15) << "Copy stack:";
	for (MutantStack<int>::const_iterator it = copy2.begin(); it != copy2.end(); it++) 
	   	std::cout << " [ " << *it << " ]";

	std::cout << std::endl << std::endl << "Adding a few elements in the copy stack..." << std::endl;

	for (int i = 6; i <= 10; i++)
		copy2.push(i);

	std::cout << std::left << std::setw(35) << "Original stack after modification:";
	for (MutantStack<int>::const_iterator it = orig.begin(); it != orig.end(); it++) 
	   	std::cout << " [ " << *it << " ]";

	std::cout << std::endl << std::left << std::setw(35) << "Copy stack after modification:";
	for (MutantStack<int>::const_iterator it = copy2.begin(); it != copy2.end(); it++) 
	   	std::cout << " [ " << *it << " ]";

	std::cout << std::endl;
}

int		main( void ) {

	testingGivenMain();
	additionnalTests();
	testingList();
	testingReverseIterator();
	testingCopy();

	return 0;
}
