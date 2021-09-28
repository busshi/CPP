/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 09:41:25 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/28 19:06:33 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NotFoundException: public std::exception {

	virtual char const * what() const throw() {

		return ("Not found");
	}
};

template< typename T >
typename T::const_iterator	easyfind( T const & c, int idx ) {

	typename T::const_iterator	it = std::find(c.begin(), c.end(), idx);

	if (it == c.end())
		throw NotFoundException();
	return it;

}

#endif
