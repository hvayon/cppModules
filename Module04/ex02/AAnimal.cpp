/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:19:53 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 21:00:26 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _name("Animal"){
    std::cout << "Default constructor of AAnimal class" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal class removed" << std::endl;
}

/* Overload */
AAnimal& AAnimal::operator=(AAnimal const &op){
    this->_name = op._name;
	return (*this);
}


AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
    *this = copy;
}

AAnimal::AAnimal(std::string name)
{
	std::cout << "Field AAnimal constructor called" << std::endl;
	this->_name = name;
}

std::string	AAnimal::getType(void) const {
    return(_name);
}

void AAnimal::makeSound(void) const {
    std::cout << "MUTE!" << std::endl;
}