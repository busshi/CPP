/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:14:37 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 13:38:59 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <string>

class	ShrubberyCreationForm: public Form {

	public:
		ShrubberyCreationForm( std::string const & target = "default ShrubberyCreationForm" );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & rhs );

		void	execute( Bureaucrat const & executor ) const;

	private:
		static const int	_sign = 145;
		static const int	_exec = 137;
		std::string const	_target;
};

#endif
