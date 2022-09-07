/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:24:27 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/07 12:57:14 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main() {

    std::string cmd;
    std::cin >> cmd;
    PhoneBook phones;
    Contact contacts; // при создании класса вызываются конструктор и деструктор
    
    if (cmd == "ADD") {
        
        phones.AddContact();

    }

    if (cmd == "SEARCH") {
        
        phones.SearchContact();

    }

    return 0;
}