/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:35:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/27 21:49:26 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Array.hpp"

#define MAX_VAL 750

int		testingGivenMain( void ) {

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

	std::cout << "\033[35mTESTS GIVEN IN THE SUBJECT...\033[0m" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
//		std::cout << "numbers[i] = " << numbers[i] << " vs " << mirror[i] << " mirrors[i]" << std::endl;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

	std::cout << std::endl << "\033[33mTesting array copy and values saved\033[0m" << std::endl << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		else
			std::cout << "Test_" << i << " [\033[32m OK \033[0m] ";
    }
    
	std::cout << std::endl << std::endl << "\033[33mTesting operator [] and try to access to invalids indexes in the array...\033[0m" << std::endl;
	try
    {
        numbers[-2] = 0;
		std::cout << "Test [-2] = 0 [ \033[31mKO\033[0m ]" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';		// suppose to catch exception and print it: -2 is not a valid array index
		std::cout << "Test [-2] = 0 [ \033[32mOK\033[0m ] Could not access to the index -2" << std::endl;
    }

	std::cout << std::endl << "\033[33mTesting to assign 0 to the index MAX_VAL in the array...\033[0m" << std::endl;
	try
    {
        numbers[MAX_VAL] = 0;
		std::cout << std::endl << "Test [MAX_VAL] = 0 [ \033[31mKO\033[0m ]" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
		std::cout << "Test [MAX_VAL] = 0 [ \033[32mOK\033[0m ] Could not assign a value to an index out of range" << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

	delete [] mirror;

	return 0;
}

void	testingAdditional() {

	std::cout << std::endl << "\033[35mADDITIONAL TESTS...\033[0m" << std::endl << std::endl;
	std::cout << "\033[33mTesting with arrays of strings...\033[0m" << std::endl;

	Array <std::string>	strArray(3);
	Array <std::string>	strArray2(2);

	std::cout << "strArray is full of: ";
	for (int i = 0; i < 3; i++) {
		strArray[i] = "[Hello] ";
		std::cout << strArray[i];
	}

	std::cout << std::endl << std::endl << "\033[33mTesting operator =...\033[0m" << std::endl;
	strArray2 = strArray;

	std::cout << "After copy, strArray2 is full of: ";
	for (int i = 0; i < 3; i++) {
		std::cout << strArray2[i];
	}

	std::cout << std::endl << std::endl << "\033[33mTesting copy constructor and check if content are the same...\033[0m" << std::endl;
	Array <std::string>	strArray3(strArray);
	for (int i = 0; i < 3; i++)
		std::cout << strArray[i] << "<= strArray[i] vs strArray3[i] => " << strArray3[i] << std::endl;

	std::cout << std::endl << "\033[33mTesting to change an array without modifying the other...\033[0m" << std::endl;
	for (int i = 0; i < 3; i++) {
		strArray3[i] = "[coucou] ";
		std::cout << strArray[i] << "<= strArray[i] vs strArray3[i] => " << strArray3[i] << std::endl;
	}

	std::cout << std::endl << "\033[33mTesting operator [] and out of range exception...\033[0m" << std::endl;
	try {
		std::cout << strArray2[3];
		std::cout << "Test strArra2y[3] [ \033[31mKO\033[0m ] Houston, we have a problem!!!" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		std::cout << "Test strArra2y[3] [ \033[32mOK\033[0m ] Could not access to the index" << std::endl;
	}
	
	try {
		std::cout << strArray2[-1];
		std::cout << "Test strArra2y[-1] [ \033[31mKO\033[0m ] Houston, we have a problem!!!" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		std::cout << "Test strArra2y[-1] [ \033[32mOK\033[0m ] Could not access to the index" << std::endl;
	}
	std::cout << std::endl << "\033[33mTesting to change an array without modifying the other...\033[0m" << std::endl;
	for (int i = 0; i < 3; i++) {
		strArray[i] = "[holà] ";
		std::cout << strArray[i] << "<= strArray[i] vs strArray2[i] => " << strArray2[i] << std::endl;
	}
}

int		main( void ) {

	testingGivenMain();
	testingAdditional();

    return 0;
}
