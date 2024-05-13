/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:22:42 by ansulist          #+#    #+#             */
/*   Updated: 2024/04/21 23:01:50 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <fstream>
#include <limits>

class Conversion
{
    private:
        char    _c;
        int     _i;
        float   _f;
        double  _d;
    public:
        Conversion();
        ~Conversion();
        void setC(char c);
        char getC(void) const;
        float getF(void) const;
        void setF(float f);
        int getI(void) const;
        void setI(int i);
        int getD(void) const;
        void setD(double d);
};

#endif