/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:11:02 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/15 22:14:13 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	private:
	    std::string	_name;
		Weapon*		_weapon;

	public :

		HumanB(std::string name);
		~HumanB(void);
		void	attack( void ) const;
		void	setWeapon(Weapon& weapon);
} ;

#endif