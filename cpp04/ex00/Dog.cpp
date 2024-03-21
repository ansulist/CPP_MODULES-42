/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:18:41 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/15 15:03:33 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Dog constructor has been called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Default Dog desdructor has been called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Copy Dog constructor has been called" << std::endl;
    this->type = copy.getType();
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this == &copy)
        return *this;

    std::cout << "Dog assignment constructor operator has been called" << std::endl;
    // this->type = copy.getType();
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog is Woufing - Wouf Wouf" << std::endl;
}