/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:18:10 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/22 14:42:13 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("unknown"), _gradesigned(150), _gradeexecute(150)
{
    std::cout << "Constructor has been called" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor has been called" << std::endl;
}

Form::Form(const std::string &name, int gradesigned, int gradeexecute) : _name(name), _gradesigned(gradesigned), _gradeexecute(gradeexecute)
{
    if (gradesigned < 1)
        throw Form::GradeTooHighException();
    if (gradesigned > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form&source) : _name(source.getname()), _gradesigned(source.gradesigned()), _gradeexecute(source.gradeexecute())
{
    std::cout << "form source has been called" << std::endl;
}

Form&   Form::operator=(const Form& other) 
{
    if ( this != &other )
        _signed = other.getsigned();
    return *this;
}

std::string Form::getname() const
{
    return _name;
}

bool Form::getsigned() const
{
    return _signed;
}

int Form::gradesigned() const
{
    return _gradesigned;
}

int Form::gradeexecute() const
{
    return _gradeexecute;
}

void Form::signedform(const Bureaucrat& b)
{
    if (b.getGrade() > _gradesigned)
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream&   operator<<( std::ostream&others, const Form& a ) 
{
    others << "Form name: " << a.getname() << std::endl
      << "Grade to be signed: " << a.gradesigned() << std::endl
      << "Grade to be executed: " << a.gradeexecute();
    return others;
}