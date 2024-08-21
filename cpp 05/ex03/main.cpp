/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:48 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/21 20:49:15 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "intern.hpp"

int main( void )
{
    std::cout << "\033[33m" << std::endl << "Test ex03 Intern" << "\033[0m" << std::endl;
	Intern Jr_Intern;
	Form *robo_intern;
	Bureaucrat b("Big Guy", 40);

	try
	{
		robo_intern = Jr_Intern.makeForm("robotomyrequestform", "World");
		b.signForm(*robo_intern);
		b.executeform(*robo_intern);
		delete robo_intern;
		robo_intern = Jr_Intern.makeForm("DoYouKnowMe", "Hmmmm");
		
	}
	catch(const std::exception& e)
	{
			std::cerr << "sorry that form doesn't exist" << std::endl;
	}
	return (0);
}