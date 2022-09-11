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
    return;
}

void    PhoneBook::addContact( void ) { //написать тут функцию add
    std::string str[_columnNumber];
    std::cout << "Enter your first name: ";
    std::cin >> str[0];
    if (std::cin.fail())
		exit(1);
    std::cout << "Enter your last name: ";
    std::cin >> str[1];
    if (std::cin.fail())
		exit(1);
    std::cout << "Enter your nickname: ";
    std::cin >> str[2];
    if (std::cin.fail())
		exit(1);
    std::cout << "Enter your phone number: ";
    std::cin >> str[3];
    if (std::cin.fail())
		exit(1);
    std::cout << "Enter your darkest secret: ";
    std::cin >> str[4];
    if (std::cin.fail())
		exit(1);
    _fillContact(str);
    _getIndex();
    return;
}

void    PhoneBook::searchContact( void ) { 
    std::string index;
	int			id;

    if (_totalContacts == 0) {
        std::cout << "No contacts in phonebook." << std::endl;
        return;
    }

    std::cout << "----------|----------|----------|----------|" << std::endl;
    std::cout.width(10);
    std::cout << "Index" << "|";
    std::cout.width(10);
    std::cout << "First name"  << "|";
    std::cout.width(10);
    std::cout << "Last name" << "|";
    std::cout.width(10);
    std::cout << "Nickname" << "|" << std::endl;
    std::cout << "----------|----------|----------|----------|" << std::endl;
    for(int i = 0; i < _totalContacts; i++)
    {
        std::cout.width(10);
        std::cout << i + 1 << "|";
        _displayContact(_contacts[i].getFirstName());
        _displayContact(_contacts[i].getLastName());
        _displayContact(_contacts[i].getNickName());
        std::cout << std::endl;
    }
    std::cout << "Enter the index (1-8): ";
	std::cin >> id;
	if (std::cin.fail() || id < 0 || id > 8)
	{
		if (std::cin.eof())
			exit(1);
		std::cerr << "Wrong index!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	else {
		if (id > _totalContacts) {
			std::cout << "No contact" << std::endl;
			return ;
		}
		std::cout << "First name: " << _contacts[id - 1].getFirstName() << std::endl;
		std::cout << "Last name: " << _contacts[id - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << _contacts[id - 1].getNickName() << std::endl;
		std::cout << "Phone number: " << _contacts[id - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << _contacts[id - 1].getDarkestSecret() << std::endl;
	}
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

void	PhoneBook::_fillContact(const std::string str[_columnNumber]) {
    _contacts[_index].setFirstName(str[0]);
    _contacts[_index].setLastName(str[1]);
    _contacts[_index].setNickName(str[2]);
    _contacts[_index].setPhoneNumber(str[3]);
    _contacts[_index].setDarkestSecret(str[4]);
}

void    PhoneBook::_displayContact(std::string str) const {
    std::cout.width(10);
    if (str.length() > 10)
        std::cout << str.substr(0, 9) + ".";
    else
        std::cout << str;
    std::cout << "|";
}