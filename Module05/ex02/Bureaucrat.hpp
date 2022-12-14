/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:36:07 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/21 20:03:37 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
#define BUREAUCRAT_CPP

#include <iomanip>
#include <iostream>

#define MINGRADE 150
#define MAXGRADE 1

class AForm;

class Bureaucrat{
    private:
        const std::string _name;
        int _grade;
    public:
        class	GradeTooHighException : public std::exception {
		    const char* what() const throw();
	    };
	    class	GradeTooLowException : public std::exception {
		    const char* what() const throw();
	    };

    	void	incrementGrade(void);
	    void	decrementGrade(void);
        Bureaucrat();
		Bureaucrat(Bureaucrat const &);
		Bureaucrat& operator=(Bureaucrat &);
		~Bureaucrat();

        Bureaucrat(const std::string& name, const int& grade);
        const std::string&  getName() const;
        const int&          getGrade(void) const;

		void				signForm(AForm& a);
		void				executeForm(AForm const& a) const;
};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif