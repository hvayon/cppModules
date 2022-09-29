/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:12:38 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/29 12:00:20 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    std::string s1 = "warrior1";
    std::string s2 = "warrior2";

    ClapTrap    c1(s1);
    ClapTrap    c2(s2);

    std::cout << std::endl << "!!! Attack without damage !!!" << std::endl;
    c1.attack(s2);
    c2.takeDamage(c1.getAttackDamage());
    std::cout << std::endl;
    c1.total();
    c2.total();
    std::cout << std::endl;

    std::cout << std::endl << "!!! use base (ClapTrap) method setAttackDamage !!!" << std::endl;
    c1.setAttackDamage(2);
    c2.setAttackDamage(3);
    c1.attack(s2);
    c2.takeDamage(c1.getAttackDamage());
    c2.attack(s1);
    c1.takeDamage(c2.getAttackDamage());
    std::cout << std::endl;
    c1.total();
    c2.total();
    std::cout << std::endl;

    std::cout << std::endl << "!!! Kill !!!" << std::endl;
    c1.setAttackDamage(10);
    c2.takeDamage(c1.getAttackDamage());
    c2.attack(s2);
    std::cout << std::endl;
    c1.total();
    c2.total();
    std::cout << std::endl;

    std::cout << std::endl << "!!! use base (ClapTrap) method beRepaired !!!" << std::endl;
    c1.beRepaired(2);
    std::cout << std::endl;
    c1.total();
    c2.total();
    std::cout << std::endl;
    std::cout << std::endl << "!!! Destructors called !!!" << std::endl;
}