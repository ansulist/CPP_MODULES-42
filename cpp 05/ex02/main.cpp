/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:48 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/22 11:14:08 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    std::cout << "Working tests:" << std::endl;
	ShrubberyCreationForm Sform("tree form");
	RobotomyRequestForm Rform("robot form");
	PresidentialPardonForm Pform("president form");
	Bureaucrat d("Bob", 1);
	Bureaucrat e("Alice", 150);

	std::cout << std::endl << "Signing forms: " << std::endl;
	d.signForm(Sform);
	e.signForm(Rform);
	d.signForm(Rform);
	d.signForm(Rform);
	d.signForm(Rform);

	std::cout << std::endl << "Executing forms: " << std::endl;
	d.executeform(Sform);
	e.executeform(Rform);
	d.executeform(Rform);
	e.executeform(Pform);
	d.signForm(Pform);
	d.executeform(Pform);
	return (0);
}