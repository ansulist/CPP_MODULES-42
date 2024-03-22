/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:18:39 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/13 21:26:41 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "Another Class has been constructed" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Another Class has been desdructed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy left!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage !" << std::endl;
    this->_energy -= 1;
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << this->_name << " is now being a Gate keeper" << std::endl;
}