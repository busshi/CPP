/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:33:45 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 16:01:43 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class	RobotomyRequestForm: public Form {

	public:
		RobotomyRequestForm( std::string const & target = "default RobotomyRequestForm" );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm( void );

		RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );

		void	doExecute( void ) const;

	private:
		static const int	_sign = 72;
		static const int	_exec = 45;
		std::string const	_target;
};

#endif
