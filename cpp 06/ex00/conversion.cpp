/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:22:29 by ansulist          #+#    #+#             */
/*   Updated: 2024/05/13 21:12:42 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

Conversion::Conversion(void)
{
    this->_c = '\0';
    this->_i = 0;
    this->_f = 0.0f;
    this->_d = 0.0;
    std::cout << "Constructor has been called and assign the value" << std::endl;
}

Conversion::~Conversion()
{
}

Conversion& Conversion::operator=(const Conversion& other)
{
    if (this != &other)
    {
        this->_i = other.getI();
        this->_f = other.getF();
        this->_d = other.getD();
    }
    return (*this);
}

/* -------------------- getters & setters */
char    Conversion::getC(void) const
{
    return (this->_c);
}

void    Conversion::setC(char c)
{
    this->_c = c;
}

float    Conversion::getF(void) const
{
    return (this->_f);
}

void    Conversion::setF(float f)
{
    this->_f = f;
}

int    Conversion::getI(void) const
{
    return (this->_i);
}

void    Conversion::setI(int i)
{
    this->_i = i;
}

int    Conversion::getD(void) const
{
    return (this->_d);
}

void    Conversion::setD(double d)
{
    this->_d = d;
}

/* ----------------------- literal */

