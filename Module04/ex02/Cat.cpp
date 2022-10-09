/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:25 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 21:00:56 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
    _a = new Brain("MEOW! MEOW!");
    std::cout << "Default constructor of Cat class" << std::endl;
}

Cat::~Cat() {
    delete _a;
    std::cout << "Cat class removed" << std::endl;
}

/* Overload */
Cat& Cat::operator=(Cat const &op){
    this->_name = op._name;
	if (this->_a)
		delete this->_a;
	this->_a = new Brain();
	*(this->_a) = *(op._a);
	return (*this);
}


Cat::Cat(const Cat &copy)
{
    this->_name = copy._name;
    this->_a = new Brain();
	*(this->_a) = *(copy._a);
	std::cout << "Copy Cat constructor called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "MEOW!" << std::endl;
}

Brain*  Cat::getBrain() const {
    return(this->_a);
}