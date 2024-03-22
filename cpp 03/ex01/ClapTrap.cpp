/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:03:42 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/14 13:32:23 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10), _damage(0)
{
    // this->_name = name;
    // this->_hitpoints = 10;
    // this->_energy = 10;
    // this->_damage = 0;
    std::cout << "Constructor is being called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is being called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &build)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = build;
}

ClapTrap ClapTrap::operator=(const ClapTrap &build)
{
    if (this != &build)
    {
        this->_name = build._name;
        this->_hitpoints = build._hitpoints;
        this->_energy = build._energy;
        this->_damage = build._damage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy <= 0)
    {
        std::cout << "ClapTrap " << _name << "No ENERGY left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    this->_energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints <= amount)
    {
        std::cout << "ClapTrap " << _name << "is dead! byee" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " is taking " << amount << " of damage!!" << std::endl;
    _hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy <= amount)
    {
        std::cout << "ClapTrap " << _name << " has no energy left!" << std::endl;
    }
    std::cout << "ClapTrap " << _name << " get repaired for " << amount << " hitpoints!" << std::endl;
    _energy -= 1;
    _hitpoints += amount; 
}