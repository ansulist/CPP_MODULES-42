/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:11:07 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/09 20:28:23 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 9;
    Zombie *horde = zombieHorde(n, "Hordie_hippie");
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}