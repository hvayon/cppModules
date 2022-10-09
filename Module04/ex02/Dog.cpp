/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:21 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 20:59:19 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
    _b = new Brain("WOOF! WOOF!");
    std::cout << "Default constructor of Dog class" << std::endl;
}

Dog::~Dog() {
    delete _b;
    std::cout << "Dog class removed" << std::endl;
}

/* Overload */
Dog& Dog::operator=(Dog const &op){
    this->_name = op._name;
	if (this->_b)
		delete this->_b;
	this->_b = new Brain();
	*(this->_b) = *(op._b);
	return (*this);
}

Dog::Dog(const Dog &copy)
{
    this->_name = copy._name;
    this->_b = new Brain();
	*(this->_b) = *(copy._b);
	std::cout << "Copy Dog constructor called" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "WOOF!" << std::endl;
}

Brain* Dog::getBrain() const {
    return(this->_b);
}