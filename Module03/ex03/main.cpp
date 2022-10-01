/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:12:38 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/01 15:13:34 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {

	std::string s1 = "warrior1";
	std::string s2 = "warrior2";
	std::string s3 = "frag";
	std::string s4 = "diamand";
	
	ClapTrap a(s1);
	ScavTrap b(s2);
	FragTrap c(s3);
	DiamondTrap d(s4);
	
	a.total();
	b.total();
	c.total();
	d.total();
	std::cout << std::endl << "!!! Diamond use his own method !!!" << std::endl;
	d.whoAmI();
	std::cout << std::endl << "!!! Diamond use method from Scav & Frag!!!" << std::endl;
	d.attack(s3);
	c.takeDamage(10);
	d.highFivesGuys();
	d.guardGate();
	
	return 0;
}
