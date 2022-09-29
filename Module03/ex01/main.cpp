/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:12:38 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/29 11:22:15 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main(void) {
    std::string s1 = "warrior1";
    std::string s2 = "warrior2";
    std::string s3 = "scav";

    ClapTrap    c1(s1);
    ClapTrap    c2(s2);
    ScavTrap    c3(s3);

    std::cout << std::endl << "!!! Attack without damage !!!" << std::endl;
    c1.attack(s2);
    c2.takeDamage(c1.getAttackDamage());
    std::cout << std::endl;
    c1.total();
    c2.total();
    std::cout << std::endl;
    
    std::cout << std::endl;
    c1.setAttackDamage(2);
    c2.setAttackDamage(3);
    c1.attack(s2);
    c1.takeDamage(c1.getAttackDamage());
    c2.attack(s2);
    c2.takeDamage(c2.getAttackDamage());
    std::cout << std::endl;
    c1.total();
    c2.total();

    std::cout << std::endl;
    c3.setAttackDamage(10);
    c3.takeDamage(c1.getAttackDamage());
    c3.attack(s2);
    std::cout << std::endl;
    c1.total();
    c2.total();
    c3.total();

    std::cout << std::endl;
    c3.guardGate();
    c1.beRepaired(2);
    std::cout << std::endl;
    c1.total();
    c2.total();
}
