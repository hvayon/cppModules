/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:39:45 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 20:49:36 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {

	std::cout << "SUBJ EXAMPLE!!!" << std::endl;
	std::cout << std::endl;
	const Animal* j = new Dog(); 
	const Animal* i = new Cat();
	
	delete j;//should not create a leak 
	delete i;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "CHECK" << std::endl;
	{
		Dog basic;
		{
			Dog tmp = basic;
		}
	}
	std::cout << std::endl;

	Cat *o = new Cat();
	Cat *c = new Cat();
	
	std::cout << "PUM" << std::endl;

	o->getBrain()->printIdeas();
	std::cout << std::endl;
	
	o->getBrain()->setIdeas("FOO");
	o->getBrain()->printIdeas();

	Animal dd(*c);
	dd.makeSound();
	std::cout << dd.getType() << std::endl;

	delete o;
	delete c;
	
	std::cout << std::endl;
	std::cout << "SUBJ REQUIRED!!!" << std::endl;
	std::cout << std::endl;
	Animal *animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << std::endl;
	return 0;
}