/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:39:45 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/09 12:42:17 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	const WrongCat* z = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	k->makeSound();
	x->makeSound();
	z->makeSound();
	delete k;
	delete x;
	delete z;

	return 0; 
}