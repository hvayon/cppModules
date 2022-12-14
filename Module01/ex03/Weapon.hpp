/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:51:33 by natalia           #+#    #+#             */
/*   Updated: 2022/09/15 21:25:56 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
# include <iostream>

class Weapon{
    
    private:
        std::string _weapon;
    
    public: 
        Weapon(std::string _weapon);
        ~Weapon( void );
        const   std::string& getType(void) const;
        void    setType(const std::string& type);
};


#endif