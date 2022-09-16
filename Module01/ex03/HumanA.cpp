/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:10:44 by natalia           #+#    #+#             */
/*   Updated: 2022/09/15 22:31:33 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) {
	this->_name = name;
    this->_weapon = &weapon;
}

HumanA::~HumanA( void ) {
    return;
}

void	HumanA::attack(void) const{
    std::cout <<  this->_name << " attacks with their " << \
		                this->_weapon->getType() << std::endl;
}

Weapon* HumanA::getWeapon(void) const {
    return this->_weapon;
}