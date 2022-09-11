/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:46:23 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/11 20:56:49 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie {

    public:
        Zombie(std::string name);
        ~Zombie( void );
        void announce( void ); // кричит BraiiiiiiinnnzzzZ... Назвать как-то зомби
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );

    private:
        std::string _name;

    
};

#endif