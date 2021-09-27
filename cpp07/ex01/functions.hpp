/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:31:57 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/27 14:32:23 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

template< typename T >
void	initArray( T & content ) {

	content = 0;
}

template< typename T >
void	printArray( T const & content ) {

	std::cout << content << " ";
}

template<typename T >
void	incrementArray( T & content ) {

	content++;
}

template< typename T >
void	changeString( T & content ) {

	content = "[changed string]";
}

#endif
