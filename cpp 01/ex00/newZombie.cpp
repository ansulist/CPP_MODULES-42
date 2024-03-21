/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:11:01 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/09 20:02:13 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// this is the heap
// bcs new allocate memory in the heap
Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->name_setter(name);
    return (zombie);
}