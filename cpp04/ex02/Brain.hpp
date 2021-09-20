/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:25:43 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/14 11:39:57 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain {

	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain &	operator=( Brain const & rhs );

	private:
		std::string	_ideas[100];
};

#endif
