/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:51:20 by natalia           #+#    #+#             */
/*   Updated: 2022/09/15 21:07:26 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) {
    this->_weapon = weapon;
}

Weapon::~Weapon( void ) {
    return;
}

const   std::string& Weapon::getType(void) const {
    return this->_weapon;
}

void Weapon::setType(const std::string& type) {
	this->_weapon = type;
}