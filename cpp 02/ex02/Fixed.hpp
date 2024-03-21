/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 01:17:00 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/13 10:41:34 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float nb);
        ~Fixed();
        Fixed(const Fixed &a);
        void operator=(const Fixed& b);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        bool operator>(const Fixed n) const;
        bool operator<(const Fixed n) const;
        bool operator>=(const Fixed n) const;
        bool operator<=(const Fixed n) const;
        bool operator!=(const Fixed n) const;
        bool operator==(const Fixed n) const;
        Fixed operator + (const Fixed n) const;
        Fixed operator - (const Fixed n) const;
        Fixed operator * (const Fixed n) const;
        Fixed operator / (const Fixed n) const;
        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream & operator<<(std::ostream & os, const Fixed& b);

#endif