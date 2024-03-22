/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:45:54 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/15 14:44:25 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default WrongCat constructor has been called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "Default WrongCat desdructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "Copy WrongCat constructor has been called" << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator = (const WrongCat &copy)
{
    this->type = copy.type;
    std::cout << "WrongCat assignment constructor operator has been called" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat is meowing - Meow Meow" << std::endl;
}