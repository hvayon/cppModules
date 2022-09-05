/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:36:17 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/05 23:21:51 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
    std::cout << "Constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook( void ) {
    std::cout << "Destructor called" << std::endl;
    return;
}