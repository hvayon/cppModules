/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:15:55 by natalia           #+#    #+#             */
/*   Updated: 2022/10/29 13:58:22 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <cstdint>

int	main(void)
{
	Data d;
	uintptr_t pass;
	Data *check;

	d.i = 1000;
	d.c = 'c';
	d.u = 4294967200;
	d.l = -2147483647;
	pass = serialize(&d);
	check = deserialize(pass);
	std::cout << "int: " << check->i << "\nchar: " <<  check->c << "\nunsigned: " << check->u << "\nlong: " << check->l << std::endl;
}