/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:03:09 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/04 10:58:26 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "--------------- Animal ---------------" << std::endl;

    Cat *jimmyTheCat = new Cat("I should eat");
    Cat *anabelleTheCat = new Cat("I should jump");
    //
    Dog *eliotTheDog = new Dog("I wanna play");
    Dog *jackTheDog = new Dog("I wanna sleep");

    const Animal *animals[4] = {jimmyTheCat, anabelleTheCat, eliotTheDog, jackTheDog};

    for (int i = 0; i < 4; i++)
       animals[i]->makeSound();

    *anabelleTheCat = *jimmyTheCat;
    *eliotTheDog = *jackTheDog;

    for (int i = 0; i < 4; i++)
       animals[i]->makeSound();

    for (int i = 0; i < 4; i++)
        delete animals[i];

    return 0;
}