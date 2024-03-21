/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:11:03 by ansulist          #+#    #+#             */
/*   Updated: 2024/01/03 19:13:57 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string _idea[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain& copy);
        Brain &operator=(const Brain& copy);
        void    setters(std::string copy, int i);
        std::string getters(int i);
};

#endif