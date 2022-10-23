/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:36:11 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 16:11:05 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) {
    std::cout << "Default constructor of Bureaucrat class" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat class removed" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &op){
    if (op.getGrade() > MINGRADE)
        throw Bureaucrat::GradeTooLowException();
    else if (op.getGrade() < MAXGRADE)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = op._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName())
{
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
    if (copy.getGrade() > MINGRADE)
        throw Bureaucrat::GradeTooLowException();
    else if (copy.getGrade() < MAXGRADE)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = copy.getGrade();
}


Bureaucrat::Bureaucrat(const std::string& name, const int& grade) : _name(name)
{
	if (grade > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

const std::string& Bureaucrat::getName() const{
    return _name;
}

const int&    Bureaucrat::getGrade(void) const{
    return _grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade too low";
}

void	Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(AForm& a)
{
	try {
		a.beSigned(*this);
		std::cout << this->getName() << " signed " << a.getName() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << this->getName() << " couldn't sign " << a.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b) {
    o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return(o);
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " can't execute form " << form << "Reason: " << e.what() << std::endl;
	}
}