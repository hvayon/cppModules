/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:10:48 by natalia           #+#    #+#             */
/*   Updated: 2022/09/15 22:20:59 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon*		_weapon;
	public :
		HumanA(std::string name, Weapon& weapon);
		~HumanA( void );
		void	attack(void) const;
		Weapon* getWeapon(void) const;
};

#endif
