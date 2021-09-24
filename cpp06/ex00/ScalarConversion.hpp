/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:09:32 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/24 21:23:02 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <string>
# include <stdexcept>

class	ScalarConversion {

	public:
		ScalarConversion( double literal = 42 );
		ScalarConversion( ScalarConversion const & src );
		~ScalarConversion( void );

		ScalarConversion &	operator=( ScalarConversion const & rhs );
		
		double				getLiteral( void ) const;

		char	toChar( void ) const;
		int		toInt( void ) const;
		float	toFloat( void ) const;
		double	toDouble( void ) const;

		/*printChar( unsigned precision, enum e_pseudo pseudo );
		printInt( unsigned precision, enum e_pseudo pseudo );
		printFloat( unsigned precision, enum e_pseudo pseudo );
		printDouble( unsigned precision, enum e_pseudo pseudo );

		getPrecision();*/

//		enum	pseudo { NON_PSEUDO, NAN, INF, NEG_INF };

		class nonDisplayableException: public std::exception {

			char const * what() const throw() { return ("Non displayable");}
		};

		class impossibleException: public std::exception {

			char const * what() const throw() { return ("impossible");}
		};

	private:
		double		_literal;
//		unsigned	precision;
};

#endif
