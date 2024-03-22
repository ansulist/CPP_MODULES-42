/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:09:04 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/15 15:03:19 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default ANIMAL constructor has been called" << std::endl;
    this->type = "Default ANimal";
}

Animal::~Animal()
{
    std::cout << "Default ANIMAL desdructor has been called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    this->type = copy.getType();
    std::cout << "ANIMAL copy constructor has been called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignment contructor operator has been called" << std::endl;
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
    std::cout << "Animal makesound has been called" << std::endl;
}