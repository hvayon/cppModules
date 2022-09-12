/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:46:10 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/12 20:47:47 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie  buka("Buka");
    buka.announce();
    Zombie *byaka = zombieHorde(8, "Byaka");
    delete [] byaka;
    return 0;
}