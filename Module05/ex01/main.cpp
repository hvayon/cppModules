/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:50:58 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/15 14:59:42 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// переписать

void	createB(const std::string& name, const int& grade)
{
	try
	{
		Bureaucrat b(name, grade);
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
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
		std::cerr << e.what() << std::endl;
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

	createB("Munk", 0);
	std::cout << std::endl;

	upgradeB(b, &Bureaucrat::incrementGrade);
	std::cout << std::endl;
}