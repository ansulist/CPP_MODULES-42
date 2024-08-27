/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 21:20:17 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/27 20:45:47 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

bool	isNum(std::string str)
{
	if (!str.empty())
	{
		if (str.find_first_not_of("0123456789") == std::string::npos
			|| (str.find_first_not_of("-0123456789") == std::string::npos && str[0] == '-'))
		{
			if (str.find('-', 1) == std::string::npos)
			return (true);
		}
	}
	return(false);
}

bool	isDouble(std::string str)
{
	if (!str.empty())
	{
		if (str.find_first_not_of("0123456789.") == std::string::npos
			|| (str.find_first_not_of("-0123456789.") == std::string::npos && str[0] == '-'))
		{
			if (str.find('-', 1) == std::string::npos
				&& str.find('.', str.find('.', 0) + 1) == std::string::npos)
			return (true);
		}
	}
	return(false);
}

bool	isFloat(std::string str)
{
	if (!str.empty())
	{
		if (str.find_first_not_of("0123456789.f") == std::string::npos
			|| (str.find_first_not_of("-0123456789.f") == std::string::npos && str[0] == '-'))
		{
			if (str.find('-', 1) == std::string::npos
				&& str.find('.', str.find('.', 0) + 1) == std::string::npos
				&& str.find('f', str.find('f', 0) + 1) == std::string::npos)
			return (true);
		}
	}
	return(false);
}

bool	isChar(std::string str)
{
	if (str.length() == 1)
		return (true);
	if ((str == "nan" || str == "+inf" || str == "-inf"))
		return (true);
	if ((str == "nanf" || str == "+inff" || str == "-inff"))
		return (true);
	return (false);
}

bool	isConvert(std::string str)
{
	if (isNum(str) || isDouble(str) || isFloat(str) || isChar(str))
		return (true);
	return (false);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (av[1][0] && isConvert(av[1]))
		{
			Conversion::convert(av[1]);
			return (0);
		}
		std::cout << "Invalid argument" << std::endl;
		return (1);
	}
	else
		std::cout << "Wrong number of arguments " << std::endl;
	return (1);
}