/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   icharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:21:42 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 09:22:37 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

class AMateria;
#include "amateria.hpp"

class ICharacter
{
	public:
		virtual	~ICharacter() {}
		/* Getters & Setters */
		virtual std::string const	&getName() const = 0;
		/* Main Member Functions */
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter &target) = 0;
};

#endif