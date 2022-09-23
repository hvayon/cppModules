/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:54:52 by natalia           #+#    #+#             */
/*   Updated: 2022/09/23 11:04:55 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) {

	Point A(0, 1);
	Point B(1, 0);
	Point C(-1, 0);
	Point dot(0, 0.5);
	
	std::cout << std::boolalpha << bsp(A, B, C, dot) << std::endl;

	return 0;
}
