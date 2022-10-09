/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:55:32 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 19:45:47 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
    private:
        std::string _ideas[100];

    public: 
  		Brain();
		Brain(Brain const &);
		Brain& operator=(Brain const &);
		~Brain();

        Brain(std::string name);
        void	printIdeas(void) const;
        const   std::string *getIdeas() const;
	    void	setIdeas(const std::string ideas);
};

#endif