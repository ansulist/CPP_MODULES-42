/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:46:28 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/15 14:45:08 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor has been called" << std::endl;
    this->type = "Wrong ANimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default WrongAnimal desdructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << "WrongAnimal copy constructor has been called";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << "WrongAnimal assignment contructor operator has been called" << std::endl;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::setters(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal makesound has been called" << std::endl;
}