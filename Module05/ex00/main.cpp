/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:50:58 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/16 13:05:07 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	createB(const std::string& name, const int& grade)
{
	try
	{
		Bureaucrat b(name, grade);
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

void	upgradeB(Bureaucrat b, void (Bureaucrat::*f)(void))
{
	try
	{
		(b.*f)();
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}	
}

int main(void)
{
	Bureaucrat b("Syn", 150);
	createB("Moon", 10);
	std::cout << std::endl;

	createB("Munk", 150);
	std::cout << std::endl;

	upgradeB(b, &Bureaucrat::decrementGrade);
	std::cout << std::endl;

	createB("Mink", 0);
	std::cout << std::endl;

	upgradeB(b, &Bureaucrat::incrementGrade);
	std::cout << std::endl;
}