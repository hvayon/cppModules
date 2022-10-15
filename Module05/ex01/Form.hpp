/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:19:53 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/15 15:59:30 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
	private:
		std::string _name;
		bool        _signed;
		const int	_signatureAccessLevel;
		const int	_executionAccessLevel;
	public:
	Form();
	Form(Form const &);
	Form& operator=(Form &);
	virtual     ~Form();

	Form(const std::string& name, const int& grade);
	const std::string&  getName() const;
	const int&          getGrade(void) const;

	class	GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	GradeTooHighException();
	GradeTooLowException();
	beSigned();
	
};
std::ostream& operator<<(std::ostream& o, const Form& b);

#endif