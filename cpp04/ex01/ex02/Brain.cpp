/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:11:07 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/03 19:53:18 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "BRAIN\t: default constructor" << std::endl;

    for (int i = 0; i < 100; i++)
        this->_idea[i] = "";
}

Brain::Brain(const Brain& copy)
{
	std::cout << "BRAIN\t: copy constructor" << std::endl;

	for (int i = 0; i < 100; i++)
	    this->_idea[i] = copy._idea[i];
}

Brain::~Brain()
{
    std::cout << "BRAIN\t: destructor" << std::endl;
}

Brain &Brain::operator=(const Brain& copy)
{
    std::cout << "BRAIN\t: equal operator" << std::endl;

	if (this == &copy)
		return (*this);
	
    for (int i = 0; i < 100; i++)
		this->_idea[i] = copy._idea[i];
	
    return (*this);
}

void Brain::setters(std::string copy, int i)
{
    this->_idea[i] = copy;
}

std::string Brain::getters(int i)
{
    return (this->_idea[i]);
}