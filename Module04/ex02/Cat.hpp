/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:28 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 20:59:13 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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