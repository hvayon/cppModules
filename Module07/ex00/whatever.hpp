/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:37:11 by hvayon            #+#    #+#             */
/*   Updated: 2022/11/03 19:06:50 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T >
void	swap(T& x, T& y) {
	T buf;
	buf = x;
	x = y;
	y = buf;
	
}

template< typename T >
T const&	min(T const & x, T const & y) {
	return (x<y ? x : y);
}

template< typename T >
T const&	max(T const & x, T const & y) {
	return (x>y ? x : y);
}

#endif