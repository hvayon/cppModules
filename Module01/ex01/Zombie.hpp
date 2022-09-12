/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:46:23 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/12 20:44:26 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie {

    public:
        Zombie( void );
        ~Zombie( void );
        Zombie (std::string name);
        void    newName( std::string name );
        void    announce( void );

    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif