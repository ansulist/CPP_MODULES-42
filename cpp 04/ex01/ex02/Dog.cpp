/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:18:41 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/03 19:53:04 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string firstIdea)
{
    std::cout << "DOG\t: constructor with idea" << std::endl;
    this->type = "Dog";
    this->_DogBrain = new Brain();
    this->_DogBrain->setters(firstIdea, 0);
}

Dog::Dog()
{
    std::cout << "DOG\t: default constructor" << std::endl;
    this->type = "Dog";
    this->_DogBrain = new Brain();
}

Dog::~Dog()
{
    std::cout << "DOG\t: destructor" << std::endl;
    delete _DogBrain;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "DOG\t: copy constructor" << std::endl;
    *this->_DogBrain = *copy._DogBrain;
    this->type = copy.type;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "DOG\t: equal operator" << std::endl;

    if (this == &copy)
        return (*this);

    this->type = copy.type;
    *this->_DogBrain = *copy._DogBrain;

    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "\033[1;33m"
              << "... Wouf Wouf *" << this->_DogBrain->getters(0) << "*"
              << "\033[0m" << std::endl;
}