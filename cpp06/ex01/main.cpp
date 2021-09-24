/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:02:08 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 14:23:58 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void	testingSerialize( unsigned i, std::string const & s) {

	Data *		d = new Data(s);

	std::cout << "\033[35m=> Test #" << i << "\033[0m" << std::endl;
	std::cout << "Elements in Data structure:" << std::endl;
	std::cout << "Input string: " << d->s << std::endl;
	std::cout << "String length: " << d->n << std::endl << std::endl;
	std::cout << "Before serialization: " << d << std::endl;

	uintptr_t	p = serialize(d);
	std::cout << "After serialization: " << p << std::endl;

	Data *		dd = deserialize(p);
	std::cout << "After deserialization: " << dd << std::endl << std::endl;

	if (d == dd)
		std::cout << "[ \033[32m OK \033[0m ] All good! Return value of deserialization is equal to the pointer before serialization..." << std::endl;
	else
		std::cout << "\033[31m KO \033[0m ] Not good! Serialize then deserialize give another pointer than the first pointer!" << std::endl;

	delete d;
}

int		main( void ) {

	testingSerialize(1, "OMSIJDSDkksodpsqàç!azaez)MLsà)");
	std::cout << std::endl;
	testingSerialize(2, "sgdfg)àé!ç\")àé'éàéedsdsdfopsdfomsf)à\"çimLKNMLSKNd,LKSJDKSJDçà!àçàzç)09183739901");
	std::cout << std::endl;
	testingSerialize(3, "");

	return 0;
}
