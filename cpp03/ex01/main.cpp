/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:03:48 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/14 13:18:58 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Anita("Anita");
	ScavTrap Gregory("Gregory");
	std::cout << std::endl;

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

	Anita.guardGate();
	Gregory.guardGate();
	std::cout << std::endl;

	return 0;
}