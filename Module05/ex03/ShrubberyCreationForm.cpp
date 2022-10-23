/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:14:47 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/22 18:14:34 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", _signLevel, _execLevel, target) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : \
	AForm(copy.getName(), copy.getSignLevel(), copy.getExecLevel(), copy.getTarget()) { }

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void	ShrubberyCreationForm::action(void) const {
    std::ofstream file(this->getTarget() + "_shrubbery");

    if (!file)
        return ;
    std::string tree = "\n\
                # #### ####\n\
            ### //#|### |/####\n\
            ##//#/ /||/##/_/##/_#\n\
            ###  //###|/ // # ###\n\
        ##_/_#/_/## | #/###_/_####\n\
        ## #### # / #| /  #### ##/##\n\
        __#_--###`  |{,###---###-~\n\
                    / }{\n\
                    }}{\n\
                    }}{\n\
                     {{}\n\
            , -=-~{ .-^- _\n\
                    `}\n\
                    {\n";
    file << tree;
    file.close();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& assign){
	(void)assign;
	return (*this);
}

AForm * ShrubberyCreationForm::clone(const std::string& name)
{
	return new ShrubberyCreationForm(name);
}

const int ShrubberyCreationForm:: _signLevel = 145;
const int ShrubberyCreationForm::_execLevel = 137;