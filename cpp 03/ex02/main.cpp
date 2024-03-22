/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:03:48 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/14 13:27:31 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap Anita("Anita");
	FragTrap Gregory("Gregory");
	std::cout << std::endl;

	// copy everything that is inside of anita to gregory
	Gregory=Anita;

	Anita.attack("Gregory");
	Gregory.takeDamage(5);
	std::cout << std::endl;

	Anita.attack("Gregory");
	Gregory.takeDamage(1);
	std::cout << std::endl;

	Anita.attack("Gregory");
	Gregory.takeDamage(1);
	std::cout << std::endl;

	Gregory.beRepaired(7);
	std::cout << std::endl;

	Anita.attack("Gregory");
	Gregory.takeDamage(10);
	std::cout << std::endl;
	
	std::cout << std::endl;

	return 0;
}