/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:45 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/21 20:44:56 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;

    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string&, int grade);
        std::string getName() const;
        int getGrade() const;
        Bureaucrat &operator= (const Bureaucrat& other);
        void incrementGrade();
        void decrementGrade();
        void signForm(Form& form);
        void executeform( const Form& form )const;

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