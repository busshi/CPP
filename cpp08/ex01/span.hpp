/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:11:33 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/28 20:23:08 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class	Span {

	public:
		Span( void );
		Span( unsigned int N );
		Span( Span const & src );
		~Span( void );

		Span &	operator=( Span const & rhs );

		void			addNumber( int nb );
		void			addRange( int start, int end );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		class NoSpanException: public std::exception {

			virtual char const * what() const throw() {
				return ("No span!");
			}
		};

		class FullStorageException: public std::exception {

			virtual char const * what() const throw() {
				return ("Cannot add more numbers. Storage is full!");
			}
		};

	private:
		unsigned int		_size;
		std::vector<int>	_storage;
};

#endif
