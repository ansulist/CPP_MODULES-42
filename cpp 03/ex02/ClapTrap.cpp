/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:03:42 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/14 13:22:28 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// take name as param
// then initialize the class member var during object creation
ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10), _damage(0)
{
    std::cout << "Constructor is being called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &build)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = build;
}

// the operator to assign the value
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