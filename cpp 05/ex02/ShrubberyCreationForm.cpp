/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:28:00 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/17 15:20:42 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Default", 145, 137)
{
	std::cout << "Default Shrubbery Form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): Form(src)
{
    *this = src;
}
 
ShrubberyCreationForm::~ShrubberyCreationForm() 
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    setSign(src.getsigned());
    return (*this);
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (this->getsigned() == false)
        throw Form::NotSignedException();
    else if (executor.getGrade() > this->gradeexecute()) {
        throw Form::GradeTooLowException();
    }
    std::ofstream file(this->getname() + "_shrubbery");
    file << "               ,@@@@@@@," << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    file << "       |o|        | |         | |" << std::endl;
    file << "       |.|        | |         | |" << std::endl;
    file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    file.close();
}