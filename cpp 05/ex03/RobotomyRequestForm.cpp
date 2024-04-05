/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:27:50 by ansulist          #+#    #+#             */
/*   Updated: 2024/04/05 10:02:41 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&    RobotomyRequestForm::operator=(RobotomyRequestForm& other) 
{
    (void)other;
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
            std::cout << "Oh Noooo!! Robotomy failed! " << _target << " is alive." << std::endl;
        i++;
    }
}