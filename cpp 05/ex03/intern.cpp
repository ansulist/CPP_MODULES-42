/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:08:41 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/21 21:06:21 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& src) 
{
    *this = src;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& rhs)
{
    (void) rhs;
    return (*this);
}

Form *Intern::createRobotomyRequestForm(const std::string target) 
{
    return new RobotomyRequestForm(target);
}

Form *Intern::createPresidentialPardonForm(const std::string target) 
{
    return new PresidentialPardonForm(target);
}

Form *Intern::createShrubberyCreationForm(const std::string target) 
{
    return new ShrubberyCreationForm(target);
}

Form* Intern::makeForm(const std::string name, const std::string target)
{
    int i = 0;
	std::string listforms[3] = {"shrubberycreationform", "robotomyrequestform", "presidentialpardonform"};
	form funcs[3] = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm };
	while (i < 3)
	{
		if (name.compare(listforms[i]) == 0)
		{
			std::cout << "Intern created " << name << std::endl;
			return ((this->*funcs[i])(target));
		}
		i++;
	}
	throw std::exception();
	return 0;
}