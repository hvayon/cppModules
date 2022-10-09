/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:34:57 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 11:54:05 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string _name;
    public: 
  		Animal();
		Animal(Animal const &);
		Animal& operator=(Animal const &);
		virtual ~Animal();

        Animal(std::string name);

        std::string	getType(void) const;
	    virtual void makeSound(void) const;
};
#endif