/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:15:33 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/03 19:52:47 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string firstIdea)
{
    std::cout << "CAT\t: constructor with idea" << std::endl;
    this->type = "Cat";
    this->_CatBrain = new Brain();
    this->_CatBrain->setters(firstIdea, 0);
}

Cat::Cat()
{
    std::cout << "CAT\t: default constructor" << std::endl;
    this->type = "Cat";
    this->_CatBrain = new Brain();
}

Cat::~Cat()
{
    std::cout << "CAT\t: destructor" << std::endl;
    delete _CatBrain;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "CAT\t: copy constructor" << std::endl;
    *this->_CatBrain = *copy._CatBrain;
    this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "CAT\t: equal operator" << std::endl;
    
    if (this == &copy)
        return (*this);

    *this->_CatBrain = *copy._CatBrain;
    this->type = copy.type;
    
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "\033[1;33m" << "... Meow Meow *" << this->_CatBrain->getters(0) << "*" << "\033[0m"  << std::endl;
}