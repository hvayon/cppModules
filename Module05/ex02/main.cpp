/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:50:58 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 16:30:24 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat soon("Soon", 50);
	Bureaucrat moon("Moon", 30);
	Bureaucrat doon("Doon", 5);
	AForm *f1 = new ShrubberyCreationForm("Tree");
	AForm *f2 = new RobotomyRequestForm("Robot");
	AForm *f3 = new PresidentialPardonForm("Pardon");

	soon.signForm(*f1);
	soon.executeForm(*f1);

	soon.signForm(*f2);
	soon.executeForm(*f2);

	std::cout << "!Bureaucrat can't sign!" << std::endl;
	moon.signForm(*f3);
	moon.executeForm(*f3);
	std::cout << "!Change bureaucrat!" << std::endl;
	doon.signForm(*f3);
	doon.executeForm(*f3);

	delete f1;
	delete f2;
	delete f3;
	return 0;
}