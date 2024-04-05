/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:28:00 by ansulist          #+#    #+#             */
/*   Updated: 2024/04/05 12:28:45 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src), _target(src._target)
{
}
// ShrubberyCreationForm::ShrubberyCreationForm() 
// {
// }

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& rhs)
{
    (void)rhs;
    return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (this->getsigned() == false)
        throw Form::NotSignedException();
    else if (executor.getGrade() > this->gradeexecute()) {
        throw Form::GradeTooLowException();
    }
    std::ofstream file( this->getname() + "_shrubbery" );
    file << "               ,@@@@@@@," << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o" << std::endl;
    file << "   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'" << std::endl;
    file << "   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'" << std::endl;
    file << "   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'" << std::endl;
    file << "   `&%\ ` /%&'    |.|        \ '|8'" << std::endl;
    file << "       |o|        | |         | |" << std::endl;
    file << "       |.|        | |         | |" << std::endl;
    file << "    \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_" << std::endl;
    file.close();
}