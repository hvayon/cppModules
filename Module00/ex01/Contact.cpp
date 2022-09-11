/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:32:36 by natalia           #+#    #+#             */
/*   Updated: 2022/09/11 15:33:29 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact( void ) {
    return;
}

Contact::~Contact( void ) {
    return;
}

void    Contact::setFirstName(const std::string &firstName) {
    this->_firstName = firstName;
}

std::string Contact::getFirstName() const {
    return _firstName;
}

void    Contact::setLastName(const std::string &lastName) {
    this->_lastName = lastName;
}

std::string Contact::getLastName() const {
    return _lastName;
}

void    Contact::setNickName(const std::string &nickName) {
    this->_nickName = nickName;
}

std::string Contact::getNickName() const {
    return _nickName;
}

void    Contact::setPhoneNumber(const std::string &phoneNumber) {
    this->_phoneNumber = phoneNumber;
}

std::string Contact::getPhoneNumber() const {
    return _phoneNumber;
}

void    Contact::setDarkestSecret(const std::string &darkestSecret) {
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret() const {
    return _nickName;
}
