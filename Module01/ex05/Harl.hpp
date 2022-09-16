/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:32:57 by natalia           #+#    #+#             */
/*   Updated: 2022/09/16 19:16:46 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl {
    
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        static const std::string commands[4];
        void (Harl::*message[4])( void );

    public:
        Harl( void );
        ~Harl( void );
        void complain( std::string level );
};

#endif