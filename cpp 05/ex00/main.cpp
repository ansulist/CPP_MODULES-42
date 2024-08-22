/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:48 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/22 14:23:33 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    try
    {
        Bureaucrat a ("anita", 1);
        std::cout << "bghth" << a << std::endl;
        Bureaucrat b;
        Bureaucrat c ("anita", 2);
        a.incrementGrade();
		std::cout << b << std::endl;
    } 
    catch (Bureaucrat::GradeTooHighException &example)
    {
        std::cout << example.what() << std::endl;
    }

    try
    {
        Bureaucrat a ("anita", 150);
        Bureaucrat b;
        Bureaucrat c ("anita", 155);
        a.decrementGrade();
    } 
    catch (Bureaucrat::GradeTooLowException &example)
    {
        std::cout << example.what() << std::endl;
    }

    return 0;
}