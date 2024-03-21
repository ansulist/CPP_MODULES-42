/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:19:41 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/08 00:15:48 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Contructor, filling the contact
Contact::Contact(std::string firstName,
                 std::string lastName,
                 std::string nickName,
                 std::string phoneNumber,
                 std::string darkestSecret) : firstName(firstName), lastName(lastName), nickName(nickName), phoneNumber(phoneNumber), darkestSecret(darkestSecret)
{
}

void Contact::display()
{
    std::cout << "Contact detail: ---------------------------" << std::endl;
    std::cout << "\033[1;33m" << "Firstname:" << "\t" << "\033[0m" << this->firstName << std::endl
              << "\033[1;33m" << "LastName:" << "\t" << "\033[0m" << this->lastName << std::endl
              << "\033[1;33m" << "NickName:" << "\t" << "\033[0m" << this->nickName << std::endl
              << "\033[1;33m" << "PhoneNumber:" << "\t" << "\033[0m" << this->phoneNumber << std::endl
              << "\033[1;33m" << "DarkestSecret:" << "\t" << "\033[0m" << this->darkestSecret
              << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

std::string Contact::getFirstName() {
    return this->firstName;
}

std::string Contact::getLastName() {
    return this->lastName;
}

std::string Contact::getNickname() {
    return this->nickName;
}