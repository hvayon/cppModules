/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:55:18 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/01 15:17:07 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	ClapTrap::_name = "DiamondTrap_clap_name";
	this->_name = "DiamondTrap";
	setHp(FragTrap::_hp); 
	setEnergy(ScavTrap::_energy);
	setAttackDamage(FragTrap::_attackDamage);
	std::cout << "Created a DiamondTrap with default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) {
	std::cout << "A new DiamondTrap created : " << _name << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	setHp(FragTrap::_hp);
	setEnergy(ScavTrap::_energy);
	setAttackDamage(FragTrap::_attackDamage);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout <<  "DiamondTrap " << _name << " removed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &op) {
if (this != &op) {
		ClapTrap::_name = op.ClapTrap::_name;
		_name = op._name;
		setHp(FragTrap::_hp);
		setEnergy(ScavTrap::_energy);
		setAttackDamage(FragTrap::_attackDamage);
	}
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy Constructor called of DiamondTrap " << _name << std::endl;
	ClapTrap::_name = copy.ClapTrap::_name;
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_energy = copy._energy;
	this->_attackDamage = copy._attackDamage;
}

void DiamondTrap::attack(std::string const target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My ClapTrap name " << ClapTrap::_name << std::endl;
}

void DiamondTrap::total(void) {
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "DiamondTrap name : " << _name << std::endl;
	std::cout << _name << " Health point : " << getHp() << std::endl;
	std::cout << _name << " Damage level : " << getAttackDamage() << std::endl;
	std::cout << _name << " Energy point : " << getEnergy() << std::endl;
	std::cout << "---------------------------------------" << std::endl;
}