/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:44:54 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/09 20:42:07 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// this is the stack
void randomChump(std::string name)
{
    // when you declare like this
    // it is not a pointer
    Zombie zombieee;
    zombieee.name_setter(name);
    zombieee.announce();
}