/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:09:00 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/04 13:03:41 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

// an abstract class is a class that contains at least one pure virtual method
// an abstract class cannot be instantiated
//
// classes inheriting from abstract classes must implement all pure virtual method
// or they also are considered abstract
class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal &operator=(const Animal &copy);
        std::string getType(void) const;
        void setters(std::string type);

        // this method must be implemented by children
        virtual void makeSound(void) const = 0;
};

#endif