/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:53:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 22:22:12 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class	Intern {

	public:
		Intern( void );
		Intern( Intern const & src );
		~Intern( void );

		Intern &	operator=( Intern const & rhs );

		Form *	makeForm( std::string const name, std::string const target );

	private:

		typedef struct {
			std::string name;
			Form * (*createForm)(std::string const & name);
		} formTypes;

};

#endif
