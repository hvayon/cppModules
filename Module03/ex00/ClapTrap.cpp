/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:12:46 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/29 11:46:43 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hp(10), _energy(10), _attackDamage(0) {
	std::cout << "Created a noname ClapTrap with default constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op) {
	std::cout << "Copy assignment operator called" << std::endl;
    _name = op.getName();
	_hp = op.getHp();
	_energy = op.getEnergy();
	_attackDamage = op.getAttackDamage();
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout <<  "ClapTrap " << _name << " removed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "Created a noname ClapTrap with default constructor" << std::endl;
    _hp = 10;
    _energy = 10;
    _attackDamage = 0;
    std::cout << "Created a " << _name << " ClapTrap" << std::endl; 
}

std::string		ClapTrap::getName( void ) const {
	//std::cout << "getName member function called" << std::endl;
	return _name;
}

void			ClapTrap::setName( std::string const name ) {
	//std::cout << "setName member function called" << std::endl;
	_name = name;
}

unsigned int	ClapTrap::getHp() const {
    //std::cout << "getHp member function called" << std::endl;
    return _hp;
}

void			ClapTrap::setHp(unsigned int hp) {
    _hp = hp;
}

unsigned int	ClapTrap::getEnergy() const {
    return _energy;    
}

void			ClapTrap::setEnergy(unsigned int energy) {
    _energy = energy;
}

unsigned int	ClapTrap::getAttackDamage() const {
    return _attackDamage;
}

void			ClapTrap::setAttackDamage(unsigned int attackDamage) {
    _attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string& target) {
	if (!_hp)
		std::cout << "ClapTrap " << _name << " dead" << std::endl;
	else if (!_energy)
		std::cout << "ClapTrap " << _name << ": not enough energy" << std::endl;
	else
	{
		--_energy;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!_hp)
		std::cout << "ClapTrap " << _name << " dead" << std::endl;
	else if (_hp <= amount) {
		_hp = 0;
		std::cout << "ClapTrap " << _name << " got killed" << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << "ClapTrap " << _name << " got damage: " << amount << ". Total hp: " << _hp << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!_hp)
		std::cout << "ClapTrap " << _name << " dead" << std::endl;
	else
	{
		--_energy;
		_hp += amount;
		std::cout << "ClapTrap " << _name << " got repaired: " << amount << ". Total hp: " << _hp << std::endl;
	}

}

void ClapTrap::total(void) {
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "ClapTrap name : " << _name << std::endl;
	std::cout << _name << " Health point : " << _hp << std::endl;
	std::cout << _name << " Damage level : " << _attackDamage << std::endl;
	std::cout << _name << " Energy point : " << _energy << std::endl;
	std::cout << "---------------------------------------" << std::endl;
}