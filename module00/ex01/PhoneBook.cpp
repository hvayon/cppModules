/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:24:19 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/07 23:02:15 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {

    _index = 0;
    _totalContacts = 0;
    return;
}

PhoneBook::~PhoneBook( void ) {

    std::cout << "Destructor called" << std::endl; // удалить
    return;
}

void    PhoneBook::addContact( void ) { //написать тут функцию add
    std::string str[8];
    std::cout << "Enter your first name: ";
    std::cin >> str[0];
    std::cout << "Enter your last name: ";
    std::cin >> str[1];
    std::cout << "Enter your nickname: ";
    std::cin >> str[2];
    std::cout << "Enter your phone number: ";
    std::cin >> str[3];
    std::cout << "Enter your darkest secret: ";
    return;
}

void    PhoneBook::searchContact( void ) { 
    std::string str[_fieldNumber];

    std::cout.width(10);
    std::cout << "Index|";
    std::cout.width(10);
    std::cout << "First name|";
    std::cout.width(10);
    std::cout << "Last name|";
    std::cout.width(10);
    std::cout << "Nickname|" << std::endl;
    return;
}

void PhoneBook::_getIndex( void ) {
    if (_index < 7)
        _index++;
    else
        _index = 0;
    if (_totalContacts <= 7)
		_totalContacts++;
}

void	PhoneBook::_fillContact(const std::string str[_fieldNumber]) {
    
}    