/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:18:42 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 09:23:18 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "icharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &copy);
		~Ice(void);
		Ice const	&operator=(Ice const &copy);
		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};

#endif