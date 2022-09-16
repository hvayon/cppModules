/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:10:52 by natalia           #+#    #+#             */
/*   Updated: 2022/09/15 22:36:22 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void) {	
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const {
	if (this->_weapon) {
		std::cout <<  this->_name << " attacks with their " << \
			this->_weapon->getType() << std::endl;
	} else {
		std::cout <<  this->_name << " i don't have a weapon" \
			<< std::endl;
	}
}