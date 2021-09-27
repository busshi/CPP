/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:36:35 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/27 21:52:29 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template< typename T >
class	Array {

	public:
		Array( void ): _size(0), _array(NULL) {}
		Array( unsigned int n ): _size(n), _array(new T[n]) {}
		Array( Array const & src ): _size(src._size), _array(new T[_size]) {

			for (unsigned int i = 0; i < _size ; i++)
				_array[i] = src._array[i];
		}

		~Array( void ) { 

			if (this->_array != NULL)
				delete [] this->_array;
		}

		Array &	operator=( Array const & rhs ) {

			if (this != &rhs) {

				if (this->_array != NULL)
					delete [] this->_array;
				this->_size = rhs._size;
				this->_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					this->_array[i] = rhs._array[i];
			}

			return *this;
		}

		T &		operator[]( unsigned int i ) {

			if (i < 0 || i >= _size)
				throw Array::OutOfRangeException();
			
			return _array[i];
		}
		
		unsigned int	size( void ) { return _size; }

		class OutOfRangeException: public std::exception {
			
			virtual char const * what() const throw() {
					return ("Element out of range");
				}
		};

	private:
		unsigned int	_size;
		T *				_array;
};

#endif
