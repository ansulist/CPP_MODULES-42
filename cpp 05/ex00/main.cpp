/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:48 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/22 14:59:39 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    try
    {
        Bureaucrat a ("anita", 1);
        std::cout << "bghth " << a << std::endl;
        Bureaucrat b;
        Bureaucrat c ("anita", 2);
        //a.incrementGrade();
		std::cout << c << std::endl;
    } 
    catch (Bureaucrat::GradeTooHighException &example)
    {
        std::cout << example.what() << std::endl;
    }

    try
    {
        Bureaucrat a ("anita", 140);
        Bureaucrat b;
        //Bureaucrat c ("anita", 130);
        a.decrementGrade();
		//std::cout << c << std::endl;
		Bureaucrat c(b);
		std::cout << c << std::endl;
		// std::cout << b << std::endl;
    } 
    catch (Bureaucrat::GradeTooLowException &example)
    {
        std::cout << example.what() << std::endl;
    }

    return 0;
}