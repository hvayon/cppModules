/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:19:53 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/08 20:20:36 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default constructor of Animal class" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal class removed" << std::endl;
}

/* Overload */
Animal& Animal::operator=(Animal const &op){
    this->_name = op._name;
	return (*this);
}


Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
    *this = copy;
}

Animal::Animal(std::string name)
{
	this->_name = name;
	std::cout << "Field Animal constructor called" << std::endl;
}

std::string	Animal::getType(void) const {
    return(_name);
}

void Animal::makeSound(void) const {
    std::cout << "MUTE!" << std::endl;
}