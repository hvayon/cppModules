/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:19:56 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/16 16:03:08 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Unsigned"), _sign(false), _signLevel(150), _execLevel(150) {
	std::cout << "Default constructor of Form class" << std::endl;
}

Form::~Form() {
	std::cout << "Form class removed" << std::endl;
}

Form::Form(const Form &copy) : _name(copy.getName()), _sign(copy.getSign()),\
							_signLevel(copy.getSignLevel()), \
							_execLevel(copy.getExecLevel()) {
	std::cout << "Copy Form constructor called" << std::endl;
	if (_signLevel > MINGRADE || _execLevel > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (_signLevel < MAXGRADE || _execLevel < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
}

Form & Form::operator=(const Form & assign)
{
	this->_sign = assign.getSign();
	return (*this);
}

Form::Form(const std::string& name, const int& signGrade, const int& exeGrade) : _name(name), _sign(false), _signLevel(signGrade), _execLevel(exeGrade)
{
	if (_signLevel < MAXGRADE || _execLevel < MAXGRADE)
		throw Form::GradeTooHighException();
	else if (_signLevel> MINGRADE || _execLevel > MINGRADE)
		throw Form::GradeTooLowException();
}

/* Getters */

const std::string& Form::getName() const{
	return _name;
}

const bool&    Form::getSign() const{
	return _sign;
}

const int&	Form::getSignLevel() const{
	return _signLevel;
}

const int&	Form::getExecLevel() const{
	return _execLevel;
}

const char* Form::GradeTooHighException:: what() const throw()
{
	return "Form grade too high";
}

const char* Form::GradeTooLowException:: what() const throw()
{
	return "Form grade too low";
}

std::ostream& operator<<(std::ostream& o, const Form& b) {
	o << "Name: " << b.getName() << std::endl;
	o << "Sign grade: " << b.getSignLevel() << std::endl;
	o << "Exec grade: " << b.getExecLevel() << std::endl; 
	o << "Signed: " << std::boolalpha << b.getSign() << std::endl;
	return(o);
}

void	Form::beSigned(Bureaucrat& b){
	if (b.getGrade() <= _signLevel)
		_sign = true;
	else
		throw Form::GradeTooHighException();
}

//сделать функцию подпись