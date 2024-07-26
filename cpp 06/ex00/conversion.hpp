/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:22:42 by ansulist          #+#    #+#             */
/*   Updated: 2024/07/07 10:52:26 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <fstream>
#include <limits>

enum types
{
    NONE,
    INT,
    FLOAT,
    CHAR,
    DOUBLE,
    LITS
};

class Conversion
{
    private:
        char    _c;
        int     _i;
        float   _f;
        double  _d;

        bool _impossible;
        std::string _str;
        types _types;

    public:
        Conversion();
        ~Conversion();
        Conversion &operator=(const Conversion &other);
        void setC(char c);
        char getC(void) const;
        float getF(void) const;
        void setF(float f);
        int getI(void) const;
        void setI(int i);
        int getD(void) const;
        void setD(double d);
        void setSTR(std::string str);
        void settingtype(void);
        bool literal(void) const;
        void print_c(void) const;
        void print_i(void) const;
        void print_f(void) const;
        void print_d(void) const;
        bool itschar(void) const;
        bool itsint(void) const;
        bool itsfloat(void) const;
        bool itsdouble(void) const;
        types gettype(void) const;
        void convert(void);
        bool itsImpossible(void);
        
        class ConversionException : public std::exception
        {
            virtual const char* what() const throw() {return "Unknown Type!";}
        };
};

std::ostream &operator<<(std::ostream &out, const Conversion &rhs);

#endif