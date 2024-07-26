/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:22:29 by ansulist          #+#    #+#             */
/*   Updated: 2024/07/07 10:49:49 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

/* -------------------- obligatory */
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

Conversion &Conversion::operator=(const Conversion &other)
{
    if (this != &other)
    {
        this->_i = other.getI();
        this->_f = other.getF();
        this->_d = other.getD();
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Conversion &rhs)
{
    out << "char: ";
    rhs.print_c();
    out << "int: ";
    rhs.print_i();
    out << "float: ";
    rhs.print_f();
    out << "double: ";
    rhs.print_d();
    return out;
}

/* -------------------- getters & setters */
char Conversion::getC(void) const
{
    return (this->_c);
}

void Conversion::setC(char c)
{
    this->_c = c;
}

float Conversion::getF(void) const
{
    return (this->_f);
}

void Conversion::setF(float f)
{
    this->_f = f;
}

int Conversion::getI(void) const
{
    return (this->_i);
}

void Conversion::setI(int i)
{
    this->_i = i;
}

int Conversion::getD(void) const
{
    return this->_d;
}
void Conversion::setD(double d)
{
    this->_d = d;
}

void Conversion::setSTR(std::string str)
{
    this->_str = str;
    this->settingtype();
    if (gettype() == NONE)
        throw Conversion::ConversionException();
}

types Conversion::gettype(void) const
{
    return this->_types;
}

/* ------------------------ setting and getting types*/

void Conversion::settingtype(void)
{
    if (itschar())
        _types = CHAR;
    else if (itsint())
        _types = INT;
    else if (itsfloat())
        _types = FLOAT;
    else if (itsdouble())
        _types = DOUBLE;
    else if (literal())
        _types = LITS;
    else
        _types = NONE;
}

/* ----------------------- literal comparison */
bool Conversion::literal(void) const
{
    if ((_impossible) || (_str.compare("nan") == 0) || (_str.compare("nanf") == 0) 
        || (_str.compare("+inf") == 0) || (_str.compare("+inff") == 0)
        || (_str.compare("-inf") == 0) || (_str.compare("-inff") == 0))
        return true;
    return false;
}

/* ------------------------ printing the variable comparison */

void Conversion::print_c(void) const
{
    if (this->literal() || (!std::isprint(_i) && (_i >= 127)))
        std::cout << "Impossible";
    else if (!std::isprint(this->_i))
        std::cout << "None displayable";
    else
        std::cout << "'" << getC() << "'";
    std::cout << std::endl;
}

void Conversion::print_i(void) const
{
    if (this->literal() || (!std::isprint(_i) && (_i >= 127)))
        std::cout << "Impossible";
    else
        std::cout << getI();
    std::cout << std::endl;
}

void Conversion::print_f(void) const
{
    if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
        std::cout << "nanf";
    else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0)
        std::cout << "+inff";
    else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0)
        std::cout << "-inff";
    else if (_impossible)
        std::cout << "Impossible";
    else
    {
        if (_f - static_cast<int>(_f) == 0)
            std::cout << _f << ".0f";
        else
            std::cout << getF() << "f";
    }
    std::cout << std::endl;
}

void Conversion::print_d(void) const
{
    if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
        std::cout << "nan";
    else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0)
        std::cout << "+inf";
    else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0)
        std::cout << "-inf";
    else if (_impossible)
        std::cout << "Impossible";
    else
    {
        if (_d - static_cast<int>(_d) == 0)
            std::cout << _d << ".0";
        else
            std::cout << getF() << "d";
    }
    std::cout << std::endl;
}

/* --------------------- checking types */

bool Conversion::itschar(void) const
{
    return (_str.length() == 1 && std::isalpha(_str[0]) && std::isprint(_str[0]));
}

bool Conversion::itsint(void) const
{
    int i = 0;

    if (_str[i] == '-' || _str[i] == '+')
        i++;
    for (int j(i); j < (int)_str.length(); j++)
    {
        if (!std::isdigit(_str[i]))
            return false;
    }
    return true;
}

bool Conversion::itsfloat(void) const
{
    // cheking if there is the . and the f position
    std::string::size_type pos = _str.find('.');
    if (pos == std::string::npos || _str[_str.length() - 1] != 'f' || pos == 0 || pos == _str.length() - 2)
        return false;

    // checking the valid character and count the number of decimal points
    int pos_count = 0;
    std::string::size_type start = (_str[0] == '-' || _str[0] == '+') ? 1 : 0;
    for (std::string::size_type i = start; i < _str.length(); i++)
    {
        if (_str[i] == '.')
            pos_count++;
        else if (!std::isdigit(_str[i]))
            return false;
        if (pos_count > 1)
            return false;
    }
    return true;
}

bool Conversion::itsdouble(void) const
{
    // cheking if there is the . position
    std::string::size_type pos = _str.find('.');
    if (pos == std::string::npos || pos == 0 || pos == _str.length() - 1)
        return false;

    // checking the valid character and count the number of decimal points
    int pos_count = 0;
    std::string::size_type start = (_str[0] == '-' || _str[0] == '+') ? 1 : 0;
    for (std::string::size_type i = start; i < _str.length(); i++)
    {
        if (_str[i] == '.')
            pos_count++;
        else if (!std::isdigit(_str[i]))
            return false;
        if (pos_count > 1)
            return false;
    }
    return true;
}

bool Conversion::itsImpossible(void)
{
    try
    {
        if (_types == INT)
            _i = std::stoi(_str);
        else if (_types == FLOAT)
            _f = std::stof(_str);
        else if (_types == DOUBLE)
            _d = std::stod(_str);
    }
    catch (std::exception &e)
    {
        _impossible = true;
        return true;
    }
    return false;
}

void Conversion::convert(void)
{
    if (itsImpossible())
        return;
    switch (_types)
    {
    case CHAR:
        _c = _str[0];
        _i = static_cast<int>(_c);
        _f = static_cast<float>(_c);
        _d = static_cast<double>(_c);
        break;
    case INT:
        _i = std::stoi(_str);
        _f = static_cast<float>(_i);
        _d = static_cast<double>(_i);
        _c = static_cast<char>(_i);
        break;
    case FLOAT:
        _f = std::stof(_str);
        _i = static_cast<char>(_f);
        _c = static_cast<int>(_f);
        _d = static_cast<double>(_f);
        break;
    case DOUBLE:
        _d = std::stod(_str);
        _c = static_cast<char>(_f);
        _i = static_cast<int>(_f);
        _f = static_cast<float>(_f);
        break;
    default:
        break;
    }
}