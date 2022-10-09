/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:25 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 12:10:52 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Default constructor of Cat class" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat class removed" << std::endl;
}

/* Overload */
Cat& Cat::operator=(Cat const &op){
    this->_name = op._name;
	return (*this);
}


Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
    *this = copy;
}

void Cat::makeSound(void) const {
    std::cout << "MEOW!" << std::endl;
}