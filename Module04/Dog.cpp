/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:21 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/08 20:40:19 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Default constructor of Dog class" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog class removed" << std::endl;
}

/* Overload */
Dog& Dog::operator=(Dog const &op){
    this->_name = op._name;
	return (*this);
}


Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
    *this = copy;
}

void Dog::makeSound(void) const {
    std::cout << "WOOF!" << std::endl;
}