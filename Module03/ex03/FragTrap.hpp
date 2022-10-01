/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:54:34 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/01 15:27:28 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hp;
		unsigned int _energy;
		unsigned int _attackDamage;
	public:
		FragTrap();
		FragTrap(FragTrap const &); 
		FragTrap    &operator=(const FragTrap &);
		virtual ~FragTrap();
    
		FragTrap(std::string name);

		void		attack(const std::string& target);
		void		highFivesGuys();
		void		total(void);
};

#endif