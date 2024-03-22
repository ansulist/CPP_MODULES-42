/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:15:33 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/15 15:03:22 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default CAT constructor has been called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Default CAT desdructor has been called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Copy CAT constructor has been called" << std::endl;
    this->type = copy.getType();
}

Cat &Cat::operator =(const Cat &copy)
{
    std::cout << "Cat assignment constructor operator has been called" << std::endl;
    this->type = copy.getType();
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat is meowing - Meow Meow" << std::endl;
}