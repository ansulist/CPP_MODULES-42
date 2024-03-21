/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:18:09 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/10 10:26:57 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    this->nb_contact = 0;
    // filling the array with null first
    for (u_int i = 0; i < MAX_CONTACTS; i++)
        this->contacts[i] = nullptr;
}

void PhoneBook::addContact(Contact &contact)
{
    if (this->nb_contact == MAX_CONTACTS)
    {
        delete this->contacts[0];

        // destroying the first contact and move it the rest up
        for (u_int i = 0; i < MAX_CONTACTS - 1; i++)
        {
            this->contacts[i] = this->contacts[i + 1];
        }
        
        // then fill the last one with the new contact
        this->contacts[this->nb_contact - 1] = &contact;
        return;
    }
    
    // else if the contact is less than 8, just fill it
    this->contacts[this->nb_contact] = &contact;
    this->nb_contact++;
}

std::string truncate10(std::string str)
{
    if (str.length() <= 10)
        return str;
    return str.substr(0, 9) + ".";
}

void PhoneBook::display()
{
    // printing the contact
    std::cout << "\033[1;34m"
              << "==================== = = Contact List:"
              << "\033[0m" << std::endl;
    std::cout << "     Index|  First N.|   Last N.|  Nickname" << std::endl;

    for (u_int i = 0; i < this->nb_contact; i++)
    {
        std::cout << std::setw(10) << i + 1 << std::flush;
        std::cout << "|" << std::setw(10) << truncate10(this->contacts[i]->getFirstName()) << std::flush;
        std::cout << "|" << std::setw(10) << truncate10(this->contacts[i]->getLastName()) << std::flush;
        std::cout << "|" << std::setw(10) << truncate10(this->contacts[i]->getNickname()) << std::flush;
        std::cout << std::endl;
    }
    
    std::cout << "\033[1;34m"
              << "======================="
              << "\033[0m" << std::endl
              << std::endl;
}

// this function is tp search the contact
// by the index of the contact
Contact *PhoneBook::search(int index)
{
    index -= 1;

    if (index >= this->nb_contact || index < 0)
        return (nullptr);
    return (this->contacts[index]);
}

PhoneBook::~PhoneBook() {
    for (int i = 0; i < this->nb_contact; i++) {
        delete this->contacts[i];
    } 
}