/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:52:43 by aldubar           #+#    #+#             */
/*   Updated: 2021/09/21 16:27:37 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string const & name, int grade ): _name(name) {

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;

}

Bureaucrat::Bureaucrat( Bureaucrat const & src ): _name(src._name) {

	*this = src;

}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {

	if (this != &rhs)
		this->_grade = rhs._grade;

	return *this;

}

std::string		Bureaucrat::getName( void ) const {

	return this->_name;

}

int				Bureaucrat::getGrade( void ) const {

	return this->_grade;

}

void			Bureaucrat::incrementGrade( void ) {

	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;

}

void			Bureaucrat::decrementGrade( void ) {

	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;

}

char const *	Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Error: Grade cannot be greater than 150!");

}

char const *	Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Error: Grade cannot be lower than 1!");

}

std::ostream &	operator<<( std::ostream &o, Bureaucrat const & b ) {

	o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";

	return o;

}
