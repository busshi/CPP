/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:07:03 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/27 00:08:27 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main()
{
	{
		Weapon        club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();

	}
	{
		Weapon        club = Weapon("crude spiked club");

	HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
