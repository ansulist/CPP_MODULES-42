/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:09:00 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/03 19:13:40 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

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
        virtual void makeSound(void) const;
};

#endif