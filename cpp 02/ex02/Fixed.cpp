/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 01:17:06 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/13 10:56:58 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

// copy constructor
Fixed::Fixed(const Fixed &a)
{
    this->_value = a.getRawBits();
}

void Fixed::operator=(const Fixed& b)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = b.getRawBits();
}

std::ostream& operator<<(std::ostream& os, const Fixed& b)
{
    os << b.toFloat();
    return (os);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

// Sets _value by left-shifting n by Fixed::_bits 
// representing fractional bits in a fixed-point number
Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << Fixed::_bits;
}

// Converts the floating-point number into a fixed-point representation and sets _value
Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = (roundf(nb * (1 << Fixed::_bits)));
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->_value) / (1 << Fixed::_bits));
}

int Fixed::toInt(void) const
{
    return (this->_value >> Fixed::_bits);
}

// ---------------------------------------------------- //
// Arithmatic op

Fixed Fixed::operator + (const Fixed n) const
{
    return Fixed(this->toFloat() + n.toFloat());
}

Fixed Fixed::operator - (const Fixed n) const
{
    return Fixed(this->toFloat() - n.toFloat());
}

Fixed Fixed::operator / (const Fixed n) const
{
    return Fixed(this->toFloat() / n.toFloat());
}

Fixed Fixed::operator * (const Fixed n) const
{
    return Fixed(this->toFloat() * n.toFloat());
}

// ---------------------------------------------------- //
// comparison op

bool    Fixed::operator > (const Fixed n) const
{
    return (this->getRawBits() > n.getRawBits());
}

bool    Fixed::operator < (const Fixed n) const
{
    return (this->getRawBits() < n.getRawBits());
}

bool    Fixed::operator <= (const Fixed n) const
{
    return (this->getRawBits() <= n.getRawBits());
}

bool    Fixed::operator >= (const Fixed n) const
{
    return (this->getRawBits() >= n.getRawBits());
}

bool    Fixed::operator != (const Fixed n) const
{
    return (this->getRawBits() != n.getRawBits());
}

bool    Fixed::operator == (const Fixed n) const
{
    return (this->getRawBits() == n.getRawBits());
}

// ---------------------------------------------------- //
// Increment/Decrement op

// pre - increment
Fixed &Fixed::operator++(void)
{
    this->_value += 1;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->_value -= 1;
    return (*this);
}

// post - increment
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value += 1;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value -= 1; 
    return (tmp);
}

// ---------------------------------------------------- //
// Maximum - Minimum

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}