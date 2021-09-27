/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:13:38 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/27 12:06:05 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap( T & a, T & b ) {

	T	tmp = a;

	a = b;
	b = tmp;
}

template< typename T >
T const &	min( T const & a, T const & b ) {
	
	return (a < b) ? a : b;
}

template< typename T >
T const &	max( T const & a, T const & b ) {

	return (a > b) ? a : b;
}

#endif
