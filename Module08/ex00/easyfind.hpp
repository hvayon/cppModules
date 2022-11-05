/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:30:48 by hvayon            #+#    #+#             */
/*   Updated: 2022/11/05 15:34:53 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector

class ObjNotFound : public std::exception
{
	public : virtual const char* what() const throw() { 
		return "Object not found";
	}
};


template<typename T>
typename T::iterator	easyFind(T& arr, int value) {
    typename T::iterator ptr;
    ptr = std::find(arr.begin(), arr.end(), value);
    if (ptr == arr.end()) {
		throw ObjNotFound() ;
	}
    return(ptr);
}


#endif