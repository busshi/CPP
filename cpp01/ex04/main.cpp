/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:46:48 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/30 11:42:32 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int		error(std::string err, std::string filename) {

	if (err == "usage")
		std::cout << "Usage: ./sedIsForLosers [filename] [s1] [s2]";
	if (err == "empty")
		std::cout << "Strings s1 and s2 must be a non-empty";
	else if (err == "input")
		std::cout << "File open Error: " << filename;
	else if (err == "output")
		std::cout << "File Write error: " << filename;
	
	std::cout << std::endl;
	
	return 1;

}

void	sed(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2) {

	std::string		line;
	size_t			len = s1.size();

	while (getline(ifs, line)) {

		for (size_t i = 0; i < line.size(); i++) {
				
				size_t	found = line.find(s1, i);

				if (found == std::string::npos) {

					ofs << &line[i];
					break;

				}
				else {

					if (found > i) {

						std::string	subLine = line.substr(i, found - i);
						ofs << subLine;
						i += subLine.size();
					}
					ofs << s2;
					i += len - 1;

				}
		}

		if (!ifs.eof())
			ofs << std::endl;
	}

}

int		main( int ac, char **av ) {

	if (ac != 4)
		return error("usage", "NULL");

	if (!av[2][0] || !av[3][0])
		return error("empty", "NULL");

	std::ifstream	ifs(av[1]);
	if (!ifs)
		return error("input", av[1]);

	std::string		extension = ".replace";
	std::ofstream	ofs(av[1] + extension);
	if (!ofs)
		return error("output", av[1] + extension);

	sed(ifs, ofs, av[2], av[3]);

	ifs.close();
	ofs.close();

	return 0;

}
