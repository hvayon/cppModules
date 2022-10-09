/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:18 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 20:10:06 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *_b;
    public: 
  		Dog();
		Dog(Dog const &);
		Dog& operator=(Dog const &);
		virtual ~Dog();
		
		Brain*	getBrain() const;
	    void	makeSound(void) const;
};
#endif