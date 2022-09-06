/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:24:19 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/06 21:08:28 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

    std::cout << "Constructor called" << std::endl; // удалить
    return;
}

PhoneBook::~PhoneBook( void ) {

    std::cout << "Destructor called" << std::endl; // удалить
    return;
}

void    PhoneBook::AddContact( void ) { //написать тут функцию add

     std::cout << "Enter your first name:" << std::endl;
     // ввод в строку?
     std::cout << "Enter your last name:" << std::endl;
     std::cout << "Enter your nickname:" << std::endl;
     std::cout << "Enter your phone number:" << std::endl;
     std::cout << "Enter your darkest secret:" << std::endl;
     return;
}