/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:34:45 by hvayon            #+#    #+#             */
/*   Updated: 2022/11/04 12:54:12 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstddef>

template <typename T>
void    iter(T *arr, unsigned int length, void (*func)(T &)) {
    for (unsigned int i = 0; i < length; i++)
		func(arr[i]);
}

template <typename T>
void	print(T & some) {
	std::cout << some << std::endl;
}

#endif