/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:24:27 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/07 21:29:15 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main() {

    std::string cmd;
    PhoneBook phones; 
    
    while(1) {
        std::cout << "Enter command: ";
        getline(std::cin, cmd);
        if (std::cin.fail())
            exit(1);
        if (cmd == "ADD")
            phones.addContact();
        else if (cmd == "SEARCH")
            phones.searchContact();
        else if (cmd == "EXIT")
            return (0);
        else
            std::cout << "WRONG COMMAND" << std::endl; 
    }
    std::cin.clear();

    return 0;
}