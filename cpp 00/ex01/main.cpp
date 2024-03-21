/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:16:56 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/10 10:28:32 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string checkinput(std::string str)
{
    std::string input;
    bool check = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
        {
            check = true;
        }
        else
        {
            std::cin.clear();
            std::cout << "Invalid input! please retry." << std::endl;
        }
    } while (!check);
    return (input);
}

Contact *getContact(void)
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkSecret;

    std::cin.ignore();
    firstName = checkinput("Enter first name: ");
    lastName = checkinput("Enter last name: ");
    nickName = checkinput("Enter nick name: ");
    phoneNumber = checkinput("Enter phone number: ");
    darkSecret = checkinput("Enter dark secret: ");
    return (new Contact(firstName, lastName, nickName, phoneNumber, darkSecret));
}

int main(void)
{
    bool exit = false;
    std::string command;
    PhoneBook phonebook;

    while (exit != true)
    {
        std::cout << std::endl;
        std::cout << "Welcome to 42 CPP PhoneBook" << std::endl;
        std::cout << "===========================" << std::endl;
        std::cout << "| Available commands :     |" << std::endl;
        std::cout << "| ADD                      |" << std::endl;
        std::cout << "| SEARCH                   |" << std::endl;
        std::cout << "| EXIT                     |" << std::endl;
        std::cout << "===========================" << std::endl;
        std::cout << "Please Select from available command: " << std::endl;
        std::cout << "> ";
        std::cin >> command;
        std::cout << "You Chose : " << command << std::endl;
        
        if (command == "EXIT")
        {
            std::cout << "Thank you for using 42 CPP PhoneBook" << std::endl;
            exit = true;
        }
        else if (command == "ADD") {
            phonebook.addContact(*getContact());
        }
        else if (command == "SEARCH")
        {
            std::string contactIndex;

            phonebook.display();
            
            std::cin.ignore();
            std::cout << "enter index: ";
            std::getline(std::cin, contactIndex);
            
            if (contactIndex.empty() || std::cin.fail())
                std::cout << "Invalid input!!" << std::endl;
            else
            {
                Contact *contact = phonebook.search(atoi(contactIndex.c_str()));
                if (contact != nullptr)
                    contact->display();
                else
                    std::cout << "Contact not found.." << std::endl;
            }
        }
        else
            std::cout << "NOT A VALID INPUT, PLS RETRY!" << std::endl;
    }
    return (0);
}