/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:45 by ansulist          #+#    #+#             */
/*   Updated: 2024/04/04 22:02:29 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;

        Bureaucrat();
    public:
        ~Bureaucrat();
        Bureaucrat(const std::string&, int grade);
        std::string getName() const;
        int getGrade() const;
        Bureaucrat &operator= (const Bureaucrat& other);
        void incrementGrade();
        void decrementGrade();
        void signForm(Form& form);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw() {return "Grade too High";}
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw() {return "Grade too Low";}
    };
};

std::ostream& operator<<(std::ostream& other, const Bureaucrat& things);

#endif