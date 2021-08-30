/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:37:20 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/30 23:27:39 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	private:
				int					_fixedPoint;
				static const int	_fractionalBits = 8;

	public:
				Fixed( void );
				Fixed( Fixed const & src );
				~Fixed( void );

				Fixed &	operator=( Fixed const & rhs );

				int		getRawBits( void ) const;
				void	setRawBits( int const raw );

};

#endif
