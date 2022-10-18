/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:50:58 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/16 15:41:09 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat soon("Soon", 52);
	Bureaucrat moon("Moon", 47);
	Form form1("Standart form", 50, 20);

	std::cout << "<<BAD FORM CREATION>>" << std::endl;
	try
	{
		Form form4("Incorrect form", -1, 20);
		std::cout << form4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "<<BAD BUREAUCRAT CREATOR>>" << std::endl;
	try
	{
		Bureaucrat soon("Bad", -52);
		std::cout << soon << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "<<Soon grade " << soon.getGrade() << " trying to sign form with grade " << form1.getSignLevel() << ">>" <<  std::endl;
	soon.signForm(form1);
	std::cout << std::endl;

	std::cout << "<<Moon grade " << moon.getGrade() << " trying to sign form with grade " << form1.getSignLevel() << ">>" <<  std::endl;
	moon.signForm(form1);
	std::cout << std::endl;

	std::cout << "<<Form info>>" << std::endl;
	std::cout << form1 << std::endl;
	std::cout << std::endl;

	std::cout << "<<Bureaucrat info>>" << std::endl;
	std::cout << soon << std::endl;
	std::cout << std::endl;
}