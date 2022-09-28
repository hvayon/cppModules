/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:54:34 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/28 22:02:58 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const &); 
		FragTrap    &operator=(const FragTrap &);
		~FragTrap();
    
		FragTrap(std::string name);

		void		attack(const std::string& target);
		void		highFivesGuys();
		void		total(void);
};

#endif