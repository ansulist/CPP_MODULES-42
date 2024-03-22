/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:20:09 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 09:21:12 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "amateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &copy);
		~Cure(void);
		Cure const	&operator=(Cure const &copy);
		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};

#endif