/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:32:22 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 12:46:36 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string _name;
    public: 
  		WrongAnimal();
		WrongAnimal(WrongAnimal const &);
		WrongAnimal& operator=(WrongAnimal const &);
		~WrongAnimal();

        WrongAnimal(std::string name);

        std::string	getType(void) const;
	    void makeSound(void) const;
};
#endif