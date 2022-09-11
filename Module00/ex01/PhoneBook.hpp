/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:24:33 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/11 15:33:43 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
    
public:
    
    PhoneBook( void );
    ~PhoneBook( void );

    void    addContact( void );
    void    searchContact( void );
    
    private:

    const static int _maxContacts = 8;
    const static int _columnNumber = 5;
    int             _index;
    int			    _totalContacts;
    Contact         _contacts[_maxContacts];
    void            _getIndex( void );
    void            _fillContact(const std::string str[_columnNumber]);
    void            _displayContact(std::string str) const;
};

#endif