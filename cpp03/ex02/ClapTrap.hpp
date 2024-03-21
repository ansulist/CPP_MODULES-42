/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:03:45 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/14 13:07:05 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    // changing the visibility of claptrap variable into protected
    // so whichever inherit it, can access it
    // without exposing them to the wider scope
    protected:
        std::string _name;
        unsigned int _hitpoints;
        unsigned int _energy;
        unsigned int _damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &build);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap operator=(const ClapTrap &build);

};

#endif