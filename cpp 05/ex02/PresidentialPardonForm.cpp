/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:27:43 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/19 14:41:37 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form(target, 25, 5)
{
    std::cout << "Presidential Pardon Form " << target << " created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("Unknown", 25, 5)
{
    std::cout << "Default Presidential Pardon Form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s): Form(s)
{
	*this = s;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    setSign(other.getsigned());
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& exect) const {
    if (exect.getGrade() > this->gradeexecute() )
        throw Form::GradeTooLowException();
    else {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}