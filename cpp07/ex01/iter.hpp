/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:12:17 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/27 16:00:23 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	iter( T * array, size_t & len, void (*f)( T & elem) ) {

	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template< typename T >
void	iter( T const * array, size_t const & len, void (*f)( T const & elem) ) {

	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif
