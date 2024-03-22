/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:11:03 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 03:57:02 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "icharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const &type);
		AMateria();
		AMateria(const AMateria &other);
		AMateria &operator= (const AMateria &copy);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif