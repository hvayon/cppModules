/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:32:36 by natalia           #+#    #+#             */
/*   Updated: 2022/09/07 12:54:06 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact( void ) {
    
    std::cout << "Constructor called" << std::endl; // удалить
    return;
}

Contact::~Contact( void ) {
    
    std::cout << "Destructor called" << std::endl; // удалить
    return;
}