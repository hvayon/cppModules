/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:19:53 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/16 15:58:25 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {
	private:
		std::string _name;
		bool        _sign;
		const int	_signLevel;
		const int	_execLevel;
	public:
	Form();
	Form(Form const &);
	Form & operator=(const Form &);
	~Form();

	Form(const std::string& name, const int& signGrade, const int& exeGrade);

	const std::string&  getName() const;
	const bool&    		getSign() const;
	const int&          getSignLevel() const;
	const int&          getExecLevel() const;

	class	GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception {
		const char* what() const throw();
	};

	void				beSigned(Bureaucrat&);

};
std::ostream& operator<<(std::ostream& o, const Form& b);

#endif