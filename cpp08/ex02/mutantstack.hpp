/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:41:39 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/29 11:09:48 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template< typename T >
class MutantStack: public std::stack<T> {

	public:
		MutantStack( void ): std::stack<T>() {}
		MutantStack( MutantStack const & src ) { *this = src; }
		~MutantStack( void ) {}

		MutantStack &	operator=( MutantStack const & rhs ) {

			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_reverse_iterator;

		iterator begin( void ) { return this->c.begin(); }
		iterator end( void ) { return this->c.end(); }
		const_iterator begin( void ) const { return this->c.begin(); }
		const_iterator end( void ) const { return this->c.end(); }
		reverse_iterator rbegin( void ) { return this->c.begin(); }
		reverse_iterator rend( void ) { return this->c.end(); }
		const_reverse_iterator rbegin( void ) const { return this->c.begin(); }
		const_reverse_iterator rend( void ) const { return this->c.end(); }
};

#endif
