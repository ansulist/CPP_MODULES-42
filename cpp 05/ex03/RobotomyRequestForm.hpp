/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:27:55 by ansulist          #+#    #+#             */
/*   Updated: 2024/04/05 10:03:11 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    const std::string   _target;

    RobotomyRequestForm();

public:
    RobotomyRequestForm( const std::string& target );
    RobotomyRequestForm( const RobotomyRequestForm& src );
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=( RobotomyRequestForm&other);

    void        execute( const Bureaucrat& executor ) const;
};

#endif