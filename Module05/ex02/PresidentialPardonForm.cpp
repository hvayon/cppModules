/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:14:36 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 16:01:15 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", _signLevel, _execLevel, target) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : \
	AForm(copy.getName(), copy.getSignLevel(), copy.getExecLevel(), copy.getTarget()) { }

PresidentialPardonForm::~PresidentialPardonForm(){
}

void	PresidentialPardonForm::action(void) const {
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& assign){
	(void)assign;
	return (*this);
}

const int PresidentialPardonForm:: _signLevel = 25;
const int PresidentialPardonForm::_execLevel = 5;