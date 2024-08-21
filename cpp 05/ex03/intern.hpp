/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:08:45 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/21 21:04:59 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &src);
        ~Intern();
        Intern &operator=(const Intern &rhs);
        
        Form *createRobotomyRequestForm(const std::string target);
        Form *createPresidentialPardonForm(const std::string target);
        Form *createShrubberyCreationForm(const std::string target);
        Form *makeForm(const std::string name, const std::string target);
        typedef Form *(Intern::*form)(std::string);
};

#endif