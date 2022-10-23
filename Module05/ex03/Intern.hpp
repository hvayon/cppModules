/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:01:45 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 18:02:42 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:

	// Constructors
	Intern();
	Intern(const Intern & copy);

	// Destructor
	~Intern();

	AForm *makeForm(const std::string& name, const std::string& target);

	// Operatros
	Intern & operator=(const Intern & assign);
};

#endif