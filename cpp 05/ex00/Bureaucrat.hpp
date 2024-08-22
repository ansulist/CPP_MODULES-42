/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:45 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/22 14:20:30 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
		
    public:
		// the Canonical form //
        ~Bureaucrat();
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
        Bureaucrat(const std::string &name, int grade);
		Bureaucrat &operator= (const Bureaucrat& other);
		
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

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