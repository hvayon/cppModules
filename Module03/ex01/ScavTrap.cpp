/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:17:56 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/01 14:58:58 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Created a noname ScavTrap with default constructor" << std::endl;
    _name = "ScavTrap";
    _hp = 10;
    _energy = 10;
    _attackDamage = 0;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy._name)
{
	_hp = copy._hp;
	_energy = copy._energy;
	_attackDamage = copy._attackDamage;
	std::cout << "Copy Constructor called of ScavTrap " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &op) {
	std::cout << "Copy assignment operator called of ScavTrap" << std::endl;
    _name = op.getName();
	_hp = op.getHp();
	_energy = op.getEnergy();
	_attackDamage = op.getAttackDamage();
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout <<  "ScavTrap " << _name << " removed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Created a noname ScavTrap with default constructor" << std::endl;
    _hp = 100;
    _energy = 50;
    _attackDamage = 20;
    std::cout << "Created a " << _name << " ScavTrap" << std::endl; 
}

void ScavTrap::attack(const std::string& target) {
	if (!_hp)
		std::cout << "ScavTrap " << _name << " dead" << std::endl;
	else if (!_energy)
		std::cout << "ScavTrap " << _name << ": not enough energy" << std::endl;
	else
	{
		--_energy;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::total(void) {
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "ScavTrap name : " << _name << std::endl;
	std::cout << _name << " Health point : " << _hp << std::endl;
	std::cout << _name << " Damage level : " << _attackDamage << std::endl;
	std::cout << _name << " Energy point : " << _energy << std::endl;
	std::cout << "---------------------------------------" << std::endl;
}