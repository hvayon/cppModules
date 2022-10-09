/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:55:36 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 20:50:52 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for(int i = 0; i < 100; i++) {
		_ideas[i] = "NO IDEAS";
	}
    std::cout << "Default constructor of Brain class" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain class removed" << std::endl;
}

/* Overload */
Brain& Brain::operator=(Brain const &op){
    for (int i = 0; i < 100; i++)
		this->_ideas[i] = op._ideas[i];
	return(*this);
}


Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain::Brain(std::string ideas)
{
	std::cout << "Field Brain constructor called" << std::endl;
	for(int i = 0; i < 100; i++) {
		_ideas[i] = ideas;
	}
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
			std::cout << "Idea " << i + 1 << ": " << _ideas[i] << "; ";
			if ((i + 1) % 10 == 0)
				std::cout << std::endl;
	}
	std::cout << std::endl;
}

void	Brain::setIdeas(const std::string ideas)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas;
}

const std::string *Brain::getIdeas() const {

    return &(this->_ideas[0]);
}