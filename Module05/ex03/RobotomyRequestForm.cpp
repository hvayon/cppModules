/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:14:40 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 18:14:52 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", _signLevel, _execLevel, target) { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : \
	AForm(copy.getName(), copy.getSignLevel(), copy.getExecLevel(), copy.getTarget()) { }

RobotomyRequestForm::~RobotomyRequestForm(){
}

void	RobotomyRequestForm::action(void) const {
	std::cout << "* Drilling sound *" << std::endl;
	srand(time(NULL));
	int value = std::rand() % 2;
	if (value % 2)
		    std::cout << this->getName() << \
			 " has been robotomized successfully by " << getTarget() << std::endl;
	else
		std::cout << getName() << ": Failed to drill " << getTarget() << std::endl;;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& assign){
	(void)assign;
	return (*this);
}

AForm * RobotomyRequestForm::clone(const std::string& name)
{
	return new RobotomyRequestForm(name);
}

const int RobotomyRequestForm:: _signLevel = 72;
const int RobotomyRequestForm::_execLevel = 45;