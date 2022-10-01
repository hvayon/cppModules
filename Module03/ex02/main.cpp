/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:12:38 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/01 12:51:29 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {
    std::string s1 = "warrior1";
    std::string s2 = "warrior2";
    std::string s3 = "scav";
    std::string s4 = "frag";

    ClapTrap    c1(s1);
    ClapTrap    c2(s2);
    ScavTrap    c3(s3);
    FragTrap    c4(s4);

    std::cout << std::endl << "!!! Init information !!!" << std::endl;
	c1.total();
	c2.total();
	c3.total();
	c4.total();
    std::cout << std::endl;
    
    std::cout << std::endl << "!!! Attack without damage !!!" << std::endl;
	c1.attack(s2);
	c1.takeDamage(c1.getAttackDamage());
    std::cout << std::endl;
    c1.total();
	c2.total();
    std::cout << std::endl;

    std::cout << std::endl << "!!! use base (ClapTrap) method setAttackDamage !!!" << std::endl;
    c1.setAttackDamage(5);
    c1.attack(s2);
    std::cout << std::endl << "!!! use base (ClapTrap) method takeDamage !!!" << std::endl;
    c4.takeDamage(c1.getAttackDamage());
    std::cout << std::endl << "!!! use base (ClapTrap) method setAttackDamage !!!" << std::endl;
    c4.setAttackDamage(3);
	c4.attack(s2);
    std::cout << "!!! use base (ClapTrap) method takeDamage !!!" << std::endl;
    c2.takeDamage(c4.getAttackDamage());
    std::cout << std::endl;
    c2.total();
	c4.total();
    std::cout << std::endl;

    std::cout << std::endl << "!!! use base (ClapTrap) method beRepaired !!!" << std::endl;
	c4.beRepaired(10);
    std::cout << std::endl;
	c4.total();
    std::cout << std::endl;
    
    std::cout << std::endl << "!!! objects uses their derived methods !!!" << std::endl;
	c3.guardGate();
	c4.highFivesGuys();
	std::cout << std::endl << "!!! Destructors called !!!" << std::endl;
}
