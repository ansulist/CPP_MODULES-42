/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:09:04 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/03 19:51:58 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "ANIMAL\t: default constructor" << std::endl;
    this->type = "Default ANimal";
}

Animal::~Animal()
{
    std::cout << "ANIMAL\t: destructor" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    this->type = copy.getType();
    std::cout << "ANIMAL\t: copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "ANIMAL\t: equal operator" << std::endl;
    this->type = copy.getType();
    return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::setters(std::string type)
{
    this->type = type;
}

void Animal::makeSound(void) const
{
    std::cout << "ANIMAL\t: makeSound()" << std::endl;
}