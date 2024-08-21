/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:48 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/21 20:44:25 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{

    // try {
    //     Bureaucrat bureaucrat("ash", 2); // error with 200
    //     ShrubberyCreationForm form1("Shrubbery");
    //     RobotomyRequestForm form2("Robotomy");
    //     PresidentialPardonForm form3("President");

    //     std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
    //     bureaucrat.signForm(form1);
    //     bureaucrat.executeform(form1);
    //     std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
    //     bureaucrat.signForm(form2);
    //     bureaucrat.executeform(form2);
    //     bureaucrat.executeform(form2);
    //     bureaucrat.executeform(form2);
    //     bureaucrat.executeform(form2);
    //     std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
    //     bureaucrat.signForm(form3);
    //     bureaucrat.executeform(form3);
    // } 
    // catch (std::exception &e) 
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // return EXIT_SUCCESS;

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