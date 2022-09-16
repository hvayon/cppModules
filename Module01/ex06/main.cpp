/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:22:20 by natalia           #+#    #+#             */
/*   Updated: 2022/09/16 19:22:40 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
    Harl harl;
    if (argc != 2) {
        std::cout << "Wrong number of args" << std::endl;
		return (1);
    }
    harl.complain(argv[1]);
}