/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:32:54 by natalia           #+#    #+#             */
/*   Updated: 2022/09/16 19:53:14 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	message[0] = &Harl::debug;
	message[1] = &Harl::info;
	message[2] = &Harl::warning;
	message[3] = &Harl::error;
}

Harl::~Harl( void ) {
    return;
}

void Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

const std::string	Harl::commands[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void Harl::complain( std::string level ) {
    int i = 0;
    while(i < 5 && level.compare(commands[i++])) {}
	switch(i)
	{
	case 5:
		std::cout << "Bad message" << std::endl;
		break;
	
	default:
		while(i < 5) {
	    	(this->*message[i - 1])();
			i++;	
		}
		break;
	}
}