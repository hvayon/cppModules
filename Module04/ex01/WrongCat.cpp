/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:35:49 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 12:41:05 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "Default constructor of WrongCat class" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat class removed" << std::endl;
}

/* Overload */
WrongCat& WrongCat::operator=(WrongCat const &op){
    this->_name = op._name;
	return (*this);
}


WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
    *this = copy;
}

void WrongCat::makeSound(void) const {
    std::cout << "MEOW!" << std::endl;
}