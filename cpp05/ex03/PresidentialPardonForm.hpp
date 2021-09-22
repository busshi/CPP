/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:33:45 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 15:36:45 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class	PresidentialPardonForm: public Form {

	public:
		PresidentialPardonForm( std::string const & target = "default PresidentialPardonForm" );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm( void );

		PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );

		void	doExecute( void ) const;

	private:
		static const int	_sign = 25;
		static const int	_exec = 5;
		std::string const	_target;
};

#endif
