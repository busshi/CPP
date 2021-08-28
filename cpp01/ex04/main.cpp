/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:46:48 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/28 18:14:39 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int		error(std::string err, std::string filename) {

	if (err == "usage")
		std::cout << "Usage: ./sedIsForLosers [filename] [s1] [s2]";
	else if (err == "input")
		std::cout << "File open Error: " << filename;
	else if (err == "output")
		std::cout << "File Write error: " << filename;
	
	std::cout << std::endl;
	
	return 1;

}

void	sed(std::ifstream &ifs, std::ofstream &ofs) {

	std::string		line;

	while (getline(ifs, line)) {

		ofs << line << std::endl;
	}

}

int		main( int ac, char **av ) {

	if (ac != 4)
		return error("usage", "NULL");

	std::ifstream	ifs(av[1]);
	if (!ifs)
		return error("input", av[1]);

	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		extension = ".replace";
	std::ofstream	ofs(av[1] + extension);
	if (!ofs)
		return error("output", av[1] + extension);

	sed(ifs, ofs);

	ifs.close();
	ofs.close();

	return 0;

}
