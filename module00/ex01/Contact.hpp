/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:32:26 by natalia           #+#    #+#             */
/*   Updated: 2022/09/07 12:50:09 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
    
    public:

        Contact( void );
        ~Contact( void );

        void    setFirstName(const std::string &firstName);
        std::string getFirstName() const;
        void    setLastName(const std::string &firstName);
        std::string getLastName() const;
        void    setNickName(const std::string &firstName);
        std::string getNickName() const;
        void    setPhoneNumber(const std::string &phoneNumber);
        std::string getPhoneNumber() const;
        void    setDarkestSecret(const std::string &DarkestSecret);
        std::string getDarkestSecret() const;

    private:

        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
        
};

#endif