/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:14:47 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/20 22:14:35 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", _signLevel, _execLevel, target) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : \
	AForm(copy.getName(), copy.getSignLevel(), copy.getExecLevel(), copy.getTarget()) { }

void	ShrubberyCreationForm::action(void) const {
    std::ofstream file(this->getTarget() + "_shrubbery");

    if (!file)
        return ;
    std::string tree = "\n\ 
                ccee88oo\n\
        C8O8O8Q8PoOb o8oo\n\
        dOB69QO8PdUOpugoO9bD\n\
        CgggbU8OU qOp qOdoUOdcb\n\
            6OuU  /p u gcoUodpP\n\
            \\\//  /douUP\n\
                \\\////\n\
                |||/\\n\
                |||\/\n\
                |||||\n\
        .....//||||\....\n";
    std::cout << tree;
    file.close();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& assign)
{
	(void)assign;
	return (*this);
}

const int ShrubberyCreationForm:: _signLevel = 145;
const int ShrubberyCreationForm::_execLevel = 137;