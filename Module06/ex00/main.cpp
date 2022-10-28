/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:41:09 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/28 21:24:32 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
    } else {
        std::cout << Convert(argv[1]);
    }
}