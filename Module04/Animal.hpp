/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:20:03 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/08 20:31:12 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
    protected:
        std::string _name;
    public: 
  		Animal();
		Animal(Animal const &);
		Animal& operator=(Animal const &);
		~Animal();  //virtual

        Animal(std::string name);

        std::string	getType(void) const;
	    void makeSound(void) const; //virtual
};

#endif