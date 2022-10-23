/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:19:53 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/21 19:52:50 by hvayon           ###   ########.fr       */
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

	AForm(const std::string& name, const int& _signLevel, const int& _execLevel, const std::string& target);

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
	class	FormNotSigned : public std::exception  {
		const char* what() const throw();
	};

	void				beSigned(Bureaucrat&);
	void				execute(const Bureaucrat& executor) const;
	virtual void		action(void) const = 0;

};
std::ostream& operator<<(std::ostream& o, const AForm& b);

#endif