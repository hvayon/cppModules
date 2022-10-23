/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:50:58 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 18:11:55 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("presidential request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("bad request", "Bender");
		delete rrf;
	}
}