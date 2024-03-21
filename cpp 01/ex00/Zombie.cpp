/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:10:54 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/09 19:47:50 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Calling Contsructor" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Calling Destructor" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::name_getter()
{
    return (this->name);
}

void    Zombie::name_setter(std::string name)
{
    this->name = name;
}