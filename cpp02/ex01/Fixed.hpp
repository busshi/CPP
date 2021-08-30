/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:37:20 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/31 00:05:37 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	private:
				int					_fixedPoint;
				static const int	_fractionalBits = 8;

	public:
				Fixed( void );
				Fixed( Fixed const & src );
				Fixed( int const n );
				Fixed( float const f );
				~Fixed( void );

				Fixed &	operator=( Fixed const & rhs );

				int		getRawBits( void ) const;
				void	setRawBits( int const raw );
				float	toFloat( void ) const;
				int		toInt( void ) const;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif
