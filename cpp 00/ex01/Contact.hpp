/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:19:37 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/04 20:00:43 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    // here is the constructor
    // this is for init the object when you new the object
    Contact(std::string firstName,
            std::string lastName,
            std::string nickName,
            std::string phoneNumber,
            std::string darkestSecret);
    // this is the regular method(function) prototype
    void display();
    Contact const *search(int index);

    // getters
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
};

#endif