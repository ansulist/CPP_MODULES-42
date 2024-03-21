/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:48:23 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/09 20:02:58 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
    void    announce(void);
    std::string name_getter();
    void    name_setter(std::string name);
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif