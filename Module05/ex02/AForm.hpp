/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:19:53 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/18 22:43:47 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm {
	private:
		const	std::string _name;
		const	std::string	_target;
		bool        		_sign;
		const	int			_signLevel;
		const	int			_execLevel;
	public:
	AForm();
	AForm(AForm const &);
	AForm & operator=(const AForm &);
	virtual ~AForm();

	AForm(const std::string& name, const int& signGrade, const int& exeGrade);

	const std::string&  getName() const;
	const std::string&  getTarget() const;
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
std::ostream& operator<<(std::ostream& o, const AForm& b);

#endif