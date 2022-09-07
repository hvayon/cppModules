/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:24:33 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/07 12:38:19 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {
    
public:
    
    PhoneBook( void );
    ~PhoneBook( void );

    void    AddContact( void );
    void    SearchContact( void );
    
};

#endif