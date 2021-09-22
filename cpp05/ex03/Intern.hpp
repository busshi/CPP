/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:53:06 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 18:27:06 by aldubar          ###   ########.fr       */
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

		struct	formTypes {
				std::string	name;
				Form *		(*createForm) ( std::string const & target );
		};

		Form *	createShrubberyCreationForm( std::string const & target );
		Form *	createRobotomyRequestForm( std::string const & target );
		Form *	createPresidentialPardonForm( std::string const & target );
};

#endif
