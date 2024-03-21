/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:18:21 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 09:22:55 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.hpp"

Character::Character(void):name("default")
{
	for (size_t i = 0; i < 4; i++)
	{
		things[i] = NULL;
		equipped[i] = false;
	}
}

Character::Character(const std::string &name): name(name)
{
	for (size_t i = 0; i < 4; i++)
	{
		things[i] = NULL;
		equipped[i] = false;
	}
}

Character::Character(const Character &old): name(old.name)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete things[i];
		things[i] = old.things[i];
		equipped[i] = old.equipped[i];
	}
	std::cout << name << " Character Copy Constructor Called" << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
	if (&rhs == this)
	{
		return (*this);
	}
	name = rhs.name;
	for (size_t i = 0; i < 4; i++)
	{
		delete things[i];
		things[i] = rhs.things[i];
		equipped[i] = rhs.equipped[i];
	}
	return (*this);
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete things[i];
	}
}

const std::string &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (equipped[i] == false)
		{
			delete things[i];
			things[i] = m;
			equipped[i] = true;
			std::cout << "Materia : " << things[i]->getType() << " equipped" << std::endl;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		equipped[idx] = false;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || equipped[idx] == false)
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	else if (idx >= 0 && idx < 4 && equipped[idx] == true)
	{
		std::cout << this->name;
		things[idx]->use(target);
	}
}