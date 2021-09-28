/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:12:17 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/28 15:51:06 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter( T const * array, size_t len, void (*f)( T const & ) )
{
	for ( size_t i = 0; i < len; i++ )
		f(array[i]);
}

// Second template only needed for my own tests (incrementArray and initArray) because there are not const !!!
template<typename T>
void	iter( T * array, size_t len, void (*f)( T & ) )
{
	for ( size_t i = 0; i < len; i++ )
		f(array[i]);
}

#endif
