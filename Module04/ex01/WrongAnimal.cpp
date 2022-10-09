/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:32:25 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 12:35:09 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _name("Animal"){
    std::cout << "Default constructor of Animal class" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Animal class removed" << std::endl;
}

/* Overload */
WrongAnimal& WrongAnimal::operator=(WrongAnimal const &op){
    this->_name = op._name;
	return (*this);
}


WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::WrongAnimal(std::string name)
{
	std::cout << "Field Animal constructor called" << std::endl;
	this->_name = name;
}

std::string	WrongAnimal::getType(void) const {
    return(_name);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "MUTE!" << std::endl;
}