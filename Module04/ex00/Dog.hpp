/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:18 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 11:47:04 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public: 
  		Dog();
		Dog(Dog const &);
		Dog& operator=(Dog const &);
		virtual ~Dog();

	    void makeSound(void) const;
};
#endif