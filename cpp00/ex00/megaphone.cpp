/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:25:26 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/04 19:17:20 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper(char *s)
{
	for (int i = 0; s[i]; i++)
		s[i] = std::toupper(s[i]);
}

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
			to_upper(av[i]);
			std::cout << av[i];
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
