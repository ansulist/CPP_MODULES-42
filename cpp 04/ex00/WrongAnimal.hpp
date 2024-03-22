/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:46:24 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/15 14:37:18 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &copy);
        std::string getType(void) const;
        void setters(std::string type);
        void makeSound(void) const;
};

#endif