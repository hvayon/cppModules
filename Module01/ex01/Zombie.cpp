/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:46:20 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/12 20:44:05 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name) : _name(name) {}

Zombie::Zombie( void ) {
    return;
}

void Zombie::newName( std::string name ) {
    this->_name = name;
}

Zombie::~Zombie( void ) {
    std::cout << this->_name << ": was destroyed" << std::endl;
    return;
}

void Zombie::announce( void ) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}