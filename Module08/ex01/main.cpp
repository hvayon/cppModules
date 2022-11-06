/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:26:48 by hvayon            #+#    #+#             */
/*   Updated: 2022/11/06 17:32:00 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
	
	srand(time(NULL));
	
	std::cout << "*******************5*********************"<< std::endl;
	try {
		Span s = Span(5);
		s.addNumber(6);
		s.addNumber(3);
		s.addNumber(17);
		s.addNumber(9);
		s.addNumber(11);

		std::cout << "min span : " << s.shortestSpan() << std::endl;
		std::cout << "max span : " << s.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "*****************10000******************"<< std::endl;

	try {
		Span sp = Span(10000);
		for (int i = 0; i < 10000; ++i) {
			sp.addNumber(rand());
		}
		std::cout << "min span : " << sp.shortestSpan() << std::endl;
		std::cout << "max span : " << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "****************1000000******************"<< std::endl;

	try {
		Span sp = Span(1000000);
		for (int i = 0; i < 1000000; ++i) {
			sp.addNumber(rand());
		}
		std::cout << "min span : " << sp.shortestSpan() << std::endl;
		std::cout << "max span : " << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "****************AddManyNumbers******************"<< std::endl;

	try {
		int a[9] = {3, 6, 9, 12, 15, 18, 23, 24, 27};
		Span sp(9);

		sp.addManyNumbers(std::begin(a), std::end(a));
		std::cout << "min span : " << sp.shortestSpan() << std::endl;
		std::cout << "max span : " << sp.longestSpan() << std::endl;

		std::cout << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}