/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:14:37 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 15:41:01 by aldubar          ###   ########.fr       */
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
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & rhs );

		void	doExecute( void ) const;

	private:
		static const int	_sign = 145;
		static const int	_exec = 137;
		std::string const	_target;
};

#endif
