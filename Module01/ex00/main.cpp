/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:46:10 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/11 21:02:46 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    Zombie  buka("Buka");
    buka.announce();
    Zombie *byaka = NULL;
    byaka = (*byaka).newZombie("Byaka");
    byaka->announce();
    delete byaka;
    (*byaka).randomChump("Booo");
}