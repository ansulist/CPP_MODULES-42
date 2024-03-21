/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:11:07 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/09 20:08:41 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *heappie;
    heappie = newZombie("Zombbiiieee Heappie");
    heappie->announce();
    delete heappie;
    randomChump("Zombbbiieee Stackie");
}