/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:19:56 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 17:09:51 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Unsigned"), _sign(false), _signLevel(150), _execLevel(150) {
}

AForm::~AForm() {
	std::cout << "AForm class removed" << std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy.getName()), _sign(copy.getSign()),\
							_signLevel(copy.getSignLevel()), \
							_execLevel(copy.getExecLevel()) {
	std::cout << "Copy Form constructor called" << std::endl;
	if (_signLevel > MINGRADE || _execLevel > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (_signLevel < MAXGRADE || _execLevel < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
}

AForm & AForm::operator=(const AForm & assign)
{
	this->_sign = assign.getSign();
	return (*this);
}

AForm::AForm(const std::string& name, const int& signLevel, const int& execLevel, const std::string& target) \
		 : _name(name), _target(target), _sign(false), _signLevel(signLevel), _execLevel(execLevel)
{
	if (_signLevel < MAXGRADE || _execLevel < MAXGRADE)
		throw AForm::GradeTooHighException();
	else if (_signLevel> MINGRADE || _execLevel > MINGRADE)
		throw AForm::GradeTooLowException();
}

/* Getters */

const std::string& AForm::getName() const{
	return _name;
}

const std::string& AForm::getTarget() const{
	return _target;
}

const bool&    AForm::getSign() const{
	return _sign;
}

const int&	AForm::getSignLevel() const{
	return _signLevel;
}

const int&	AForm::getExecLevel() const{
	return _execLevel;
}

const char* AForm::GradeTooHighException:: what() const throw()
{
	return "AForm grade too high";
}

const char* AForm::GradeTooLowException:: what() const throw()
{
	return "AForm grade too low";
}

const char* AForm::FormNotSigned::what() const throw()
{
	return "Form not signed";
}

std::ostream& operator<<(std::ostream& o, const AForm& f) {
	o << f.getName() << ". Sign grade: " << f.getSignLevel() << ". Exec grade: " << f.getExecLevel() << ". Signed: " << std::boolalpha << f.getSign();
	return (o);
}


void	AForm::beSigned(Bureaucrat& b){
	if (b.getGrade() <= _signLevel)
		_sign = true;
	else
		throw AForm::GradeTooHighException();
}


void	AForm::execute(const Bureaucrat& executor) const {
	if (!_sign)
		throw AForm::FormNotSigned();
	else if (executor.getGrade() > this->_signLevel)
		throw AForm::GradeTooHighException();
	else
		action();
}
