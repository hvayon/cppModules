/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:28 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 11:46:44 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public: 
  		Cat();
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		virtual ~Cat();

	    void makeSound(void) const;
};
#endif