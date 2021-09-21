/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:52:43 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/21 16:54:43 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string const & name, int const gradeToSign, int const gradeToExecute ): _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false) {

	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();

}

Form::Form( Form const & src ): _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {

	*this = src;

}

Form::~Form( void ) {}

Form &				Form::operator=( Form const & rhs ) {

	if (this != &rhs)
		this->_isSigned = rhs._isSigned;

	return *this;

}

std::string const &	Form::getName( void ) const {

	return this->_name;

}

int					Form::getGradeToSign( void ) const {

	return this->_gradeToSign;

}

int					Form::getGradeToExecute( void ) const {

	return this->_gradeToExecute;

}

bool				Form::getIsSigned( void ) const {

	return this->_isSigned;

}

void				Form::beSigned( Bureaucrat const & b ) {

	if (b.getGrade() > getGradeToSign())
		throw Form::GradeTooLowException();
	else
		_isSigned = true;
}

char const *		Form::GradeTooLowException::what() const throw() {

	return ("Form error: Grade too low!");

}

char const *		Form::GradeTooHighException::what() const throw() {

	return ("Form error: Grade too high!");

}

std::ostream &	operator<<( std::ostream &o, Form const & f ) {

	o << "Form [ " << f.getName() << " ] status: " << (f.getIsSigned() ? "\033[32msigned\033[0m" : "\033[31mnot signed\033[0m") << ", grade to sign: " << f.getGradeToSign() << ", grade to execute: " << f.getGradeToExecute();

	return o;

}
