/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:55:21 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/01 13:35:30 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private :
		std::string	_name;
	public :
		DiamondTrap();
		DiamondTrap(const DiamondTrap &);
		DiamondTrap	&operator = (const DiamondTrap &);
		~DiamondTrap(void);
		DiamondTrap(const std::string name);
		void		attack(std::string const target);
		void        whoAmI(void);
		void		total(void);
} ;

#endif