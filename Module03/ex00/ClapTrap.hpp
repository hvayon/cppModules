/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:12:44 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/26 21:05:11 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	
	private:
		std::string _name;
		unsigned int _hp;
		unsigned int _energy;
		unsigned int _attackDamage;

	public:
		ClapTrap();
		ClapTrap(ClapTrap const &);
		ClapTrap& operator=(ClapTrap const &);
		~ClapTrap();

		ClapTrap(std::string name);

		/*Getters Setters*/
		std::string		getName( void ) const;
		void			setName( std::string const name );
		unsigned int	getHp() const;
		void			setHp(unsigned int hp);
		unsigned int	getEnergy() const;
		void			setEnergy(unsigned int energy);
		unsigned int	getAttackDamage() const;
		void			setAttackDamage(unsigned int attackDamage);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif