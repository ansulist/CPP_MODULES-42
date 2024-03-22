/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:10:40 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 09:22:47 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "amateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "AMateria Constructor Called" << std::endl;

}

AMateria::AMateria()
{
	std::cout << "Default AMateria Constructor Called" << std::endl;
}
AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria Copy Constructor Called" << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	if (this != &copy){
		_type=copy.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &AMateria::getType()const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	(void) target;
	std::cout << "* AMateria generic action done at " << this->getType() << " *" << std::endl;
}