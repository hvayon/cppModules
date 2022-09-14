/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:42:12 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/14 21:16:21 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int		main( void )
{
	std::string	originalString = "HI THIS IS BRAIN";
	std::string *stringPTR = &originalString;
	std::string	&stringREF = originalString;

	std::cout << "Take address of the string : " << &originalString << std::endl;
	std::cout << "Take address of the pointer to string : " << stringPTR << std::endl;
	std::cout << "Take reference: " << &stringREF << std::endl;

    std::cout << std::endl;

	std::cout << "Original string: " << originalString << std::endl;
	std::cout << "Pointer to string: " << *stringPTR << std::endl;
	std::cout << "Reference to string: " << stringREF << std::endl;
    return(0);
}
