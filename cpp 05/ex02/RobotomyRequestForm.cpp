/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:27:50 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/17 14:49:17 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request Form", 72, 45)
{ 
    std::cout << "Default Robotomy Request Form created" << std::endl;  
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form(target, 72, 45)
{
    std::cout << "Robotomy Form " << target << " created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): Form(src)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&    RobotomyRequestForm::operator=(const RobotomyRequestForm& other) 
{
    setSign(other.getsigned());
    return *this;
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (executor.getGrade() > this->gradeexecute())
        throw Form::GradeTooLowException();
    else {
        static int  i;
        if (i % 2 == 0)
            std::cout << "Oh OH Oh Bzzt BZzZzZt! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Oh Noooo!! Robotomy failed! --> " << _target << std::endl;
        i++;
    }
}