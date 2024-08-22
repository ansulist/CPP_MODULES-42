/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:45 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/22 14:38:27 by ansulist         ###   ########.fr       */
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
        const std::string _name;
        int _grade;

    public:
		Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string&, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator= (const Bureaucrat& other);
        std::string getName() const;
        int getGrade() const;
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