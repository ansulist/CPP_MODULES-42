/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:33:36 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/10 12:44:15 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    std::cout << "constructor is being called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "destructor is being called" << std ::endl;
}

typedef void (Harl::*DisplayFunc)(void);

void Harl::complain(std::string level)
{
    std::string signs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    DisplayFunc displayFuncs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (signs[i] == level)
        {
            (this->*(displayFuncs[i]))();
            return;
        }
    }

    // ignore the message
}