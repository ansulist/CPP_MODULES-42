/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:18:36 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/03 19:39:18 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CPP
#define DOG_CPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_DogBrain;
    public:
        Dog(std::string firstIdea);
        Dog();
        ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        void makeSound() const; 
};

#endif