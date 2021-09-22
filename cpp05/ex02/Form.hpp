/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:58:15 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/22 15:30:22 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat;

class	Form {

	public:
		Form( std::string const & name = "default form", int gradeToSign = 150, int gradeToExecute = 150 );
		Form( Form const & src );
		virtual ~Form( void );

		Form &	operator=( Form const & rhs );

		std::string const &	getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				getIsSigned( void ) const;

		void				beSigned( Bureaucrat const & b );
		
		void				execute( Bureaucrat const & executor ) const;
		virtual void		doExecute( void ) const = 0;

		class GradeTooHighException: public std::exception {

			const char * what() const throw();
		};

		class GradeTooLowException: public std::exception {

			const char * what() const throw();
		};

		class NotSignedException: public std::exception {

			const char * what() const throw();
		};

	private:
		std::string	const	_name;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		bool				_isSigned;
};

std::ostream & operator<<( std::ostream & o, Form const & f );

#endif
