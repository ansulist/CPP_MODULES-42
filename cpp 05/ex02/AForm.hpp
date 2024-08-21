/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:18:14 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/21 20:45:11 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

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

    public:
        Form();
        virtual ~Form();
        Form(const std::string &name, int gradesigned, int gradeexecute);
        Form(const Form&source);
        std::string getname() const;
        bool getsigned() const;
        int gradesigned() const;
        int gradeexecute() const;
        void signedform(const Bureaucrat& b);
        Form& operator=(const Form&other);
        void setSign(bool sign);
        virtual void execute(const Bureaucrat& executor) const = 0;

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
        class NotSignedException : public std::exception 
        {
            public:
                virtual const char* what() const throw() { return "Form not signed"; }
        };
};

std::ostream&   operator<<( std::ostream&others, const Form& a);

#endif