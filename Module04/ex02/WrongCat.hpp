/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:35:53 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 12:49:20 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public: 
  		WrongCat();
		WrongCat(WrongCat const &);
		WrongCat& operator=(WrongCat const &);
		~WrongCat();

	    
        void makeSound(void) const;
};
#endif