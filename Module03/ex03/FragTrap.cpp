/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:54:31 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/01 14:59:22 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Created a FragTrap with default constructor" << std::endl;
    _name = "FragTrap";
    _hp = 100;
    _energy = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap::ClapTrap(copy) {
	std::cout << "Copy Constructor called of FragTrap " << _name << std::endl;
	_hp = copy._hp;
	_energy = copy._energy;
	_attackDamage = copy._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &op) {
	std::cout << "Copy assignment operator called of FragTrap" << std::endl;
    _name = op.getName();
	_hp = op.getHp();
	_energy = op.getEnergy();
	_attackDamage = op.getAttackDamage();
	return *this;
}

FragTrap::~FragTrap() {
	std::cout <<  "FragTrap " << _name << " removed" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)  {
    _hp = 100;
    _energy = 100;
    _attackDamage = 30;
    std::cout << "Created a " << _name << " ScavTrap" << std::endl; 
}

void FragTrap::attack(const std::string& target) {
	if (!_hp)
		std::cout << "FragTrap " << _name << " dead" << std::endl;
	else if (!_energy)
		std::cout << "FragTrap " << _name << ": not enough energy" << std::endl;
	else
	{
		--_energy;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << ": High five guys!" << std::endl;
}

void FragTrap::total(void) {
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "FragTrap name : " << _name << std::endl;
	std::cout << _name << " Health point : " << _hp << std::endl;
	std::cout << _name << " Damage level : " << _attackDamage << std::endl;
	std::cout << _name << " Energy point : " << _energy << std::endl;
	std::cout << "---------------------------------------" << std::endl;
}