/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:43:54 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/09 22:09:49 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// optional weapon for human
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = nullptr;
}

void HumanB::attack(void)
{
    // if the weapon is not set then no weapon for humanB
    if (this->weapon == nullptr)
    {
        std::cout << this->name << " attacks without weapon" << std::endl;
        return;
    }
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
