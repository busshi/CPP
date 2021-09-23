/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:09:32 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/23 23:28:13 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <string>
# include <stdexcept>

class	ScalarConversion {

	public:
		ScalarConversion( void );
		ScalarConversion( std::string literal );
		ScalarConversion( ScalarConversion const & src );
		~ScalarConversion( void );

		ScalarConversion &	operator=( ScalarConversion const & rhs );
		
		std::string 	getLiteral( void ) const;

		char	toChar( void );
		char	toCharDigit( void );
		char	toCharNoDigit( void );
		int		toInt( void );
		float	toFloat( void );
		double	toDouble( void );

		class nonDisplayableException: public std::exception {

			virtual char const * what() const throw() { return ("Non displayable");}
		};

		class impossibleException: public std::exception {

			char const * what() const throw() { return ("impossible");}
		};

	private:
		std::string	_literal;
};

#endif
