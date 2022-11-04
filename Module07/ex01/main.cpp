/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:29:17 by hvayon            #+#    #+#             */
/*   Updated: 2022/11/04 13:04:05 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <random>

void	randomized(int & num)
{
	std::random_device	rd;
	num = rd();
}

int	main(void)
{
	int a[5];

	iter(a, 5, &randomized);
	iter(a, 5, &print);
	return (0);
}