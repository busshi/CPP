/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:25:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/17 21:20:36 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int		i;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (av[i])
		{
			for (int j = 0; av[i][j]; j++)
			{
				av[i][j] = std::toupper(av[i][j]);
				std::cout << av[i][j];
			}
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}
