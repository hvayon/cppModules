/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:28 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 20:10:00 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_a;
    public: 
  		Cat();
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		virtual ~Cat();

		Brain*	getBrain() const;
	    void	makeSound(void) const;
};
#endif