/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:34:57 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 20:58:43 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string _name;
    public: 
  		AAnimal();
		AAnimal(AAnimal const &);
		AAnimal& operator=(AAnimal const &);
		virtual ~AAnimal();

        AAnimal(std::string name);

        std::string	getType(void) const;
	    virtual void makeSound(void) const = 0;
};
#endif