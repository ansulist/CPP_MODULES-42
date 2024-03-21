/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:00:47 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/14 13:00:22 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "Sub Class FragTrap constructor has been called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor has been called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->_energy <= 0)
    {
        std::cout << "FragTrap " << this->_name << " has no energy left!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " is highfiving evreybody" << std::endl;
    this->_energy -= 1;
}