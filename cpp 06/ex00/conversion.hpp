/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:22:42 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/23 21:15:21 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <limits>
#include <cstdlib>
#include <iomanip>

class Conversion
{
private: 
		Conversion();
		Conversion(const Conversion &other);
		Conversion &operator=(const Conversion &other);
public:
		virtual ~Conversion();
		static void convert(std::string type);
		static void	toChar(std::string str);
		static void	toInt(std::string str);
		static void	toDouble(std::string str);
		static void	toFloat(std::string str);	
};

#endif