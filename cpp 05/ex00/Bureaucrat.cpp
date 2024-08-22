/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:42 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/22 14:22:53 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*---------- Constructor and desdructor ----------*/
Bureaucrat::Bureaucrat(): _name("noname"), _grade(150)
{
    std::cout << "Constructor has been called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name), _grade(copy._grade)
{
	std::cout << "copy constructor has been called" << std::endl;
}

/*---------- operators ----------*/
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) 
{
    if (this != &other)
        _grade = other.getGrade();
    return *this;
}

// comparison and limitation of each grades
Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Constructor with params has been called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

/*---------- getting names and grade ----------*/
std::string Bureaucrat::getName() const 
{
    return _name;
}

int Bureaucrat::getGrade() const 
{
    return _grade;
}

/*---------- decrement and increment ----------*/
void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade -= 1;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooHighException();
    _grade += 1;
}

std::ostream& operator<<(std::ostream& other, const Bureaucrat& things)
{
    other << things.getName() << ", bureaucrat grade " << things.getGrade();
    return other;
}