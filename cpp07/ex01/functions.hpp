/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:31:57 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/27 19:07:40 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

template< typename T >
void	initArray( T & content ) {

	content = 42;
}

/*template<>
void	initArray( std::string & s ) {

	s = "[default string]";
}*/

template< typename T >
void	printArray( T const & content ) {

	std::cout << content << " ";
}

template<typename T >
void	incrementArray( T & content ) {

	content++;
}

#endif
