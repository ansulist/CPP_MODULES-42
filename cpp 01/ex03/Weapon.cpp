/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:44:02 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/09 22:10:44 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

//returning the value of type of weapon in the private class
std::string const &Weapon::getType()
{
    return (this->type);
}

//setting the new type of weapon in the private class
void Weapon::setType(std::string str)
{
    this->type = str;
}