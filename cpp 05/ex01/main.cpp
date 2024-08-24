/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:06:48 by ansulist          #+#    #+#             */
/*   Updated: 2024/08/23 11:28:22 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    Form x("Form X", 10, 8);
    Form y("Form Y", 120, 80);

    Form a(y);
    std::cout << x << std::endl << y << std::endl << a << std::endl;
    return EXIT_SUCCESS;
}