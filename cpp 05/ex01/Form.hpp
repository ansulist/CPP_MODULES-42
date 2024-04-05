/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:18:14 by ansulist          #+#    #+#             */
/*   Updated: 2024/04/05 08:40:09 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int  _gradesigned;
        const int  _gradeexecute; 

        Form();
    public:
        ~Form();
        Form(const std::string &name, int gradesigned);
        Form(const Form&source);
        std::string getname() const;
        bool getsigned() const;
        int gradesigned() const;
        int gradeexecute() const;
        void signedform(const Bureaucrat& b);
        Form& operator=(const Form& other);

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw() {return "Grade too high";}   
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw() {return "Grade too low";}   
        };
};

std::ostream&   operator<<( std::ostream&others, const Form& a);

#endif