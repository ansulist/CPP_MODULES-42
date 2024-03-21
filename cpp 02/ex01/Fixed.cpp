/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 01:17:06 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/13 10:15:10 by ansulist         ###   ########.fr       */
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
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
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
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

// you move it to the left 
// so you can preserve it
Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << Fixed::_bits;
}

// 1 << bits or 1 << 8 equals to 256
// so it's gonna be the nb multiplied by 256 
// then they take the round part only
// to preserve the value
// Converts the floating-point number into a fixed-point representation and sets _value
Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = (roundf(nb * (1 << Fixed::_bits)));
}

// return it back the value by dividing it with 1 << bits
// which is 256
float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->_value) / (1 << Fixed::_bits));
}

// and move it back to the right
// so you can extract it
int Fixed::toInt(void) const
{
    return (this->_value >> Fixed::_bits);
}