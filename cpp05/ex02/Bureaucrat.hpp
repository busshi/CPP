/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:52:43 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 14:15:32 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class	Bureaucrat {

	public:
		Bureaucrat( std::string const &name = "default Bureaucrat", int grade = 150 );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

		Bureaucrat &	operator=( Bureaucrat const & rhs );

		std::string		getName( void ) const;
		int				getGrade( void ) const;

		void			incrementGrade( void );
		void			decrementGrade( void );
		void			signForm( Form & form );
		void			executeForm( Form const & form );

		class GradeTooHighException: public std::exception {

			const char * what() const throw();
		};

		class GradeTooLowException: public std::exception {

			const char * what() const throw();
		};

	private:
		std::string	const	_name;
		int					_grade;

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & b );

#endif
