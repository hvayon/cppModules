/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:10:58 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/12 20:40:19 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    if (N <= 0)
        return (0);
    Zombie* newZombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        newZombie[i].newName(name);
        newZombie[i].announce();
    }
    return (newZombie);
}