/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiasource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 04:02:01 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 09:24:24 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "imateriasource.hpp"
#include "amateria.hpp"

class MateriaSource: public IMateriaSource
{
	private: 
			AMateria *copyM[4];
			int count;
	public:
			MateriaSource();
			MateriaSource(const MateriaSource &other);
			MateriaSource &operator=(const MateriaSource &other); 
			~MateriaSource();
			virtual void	learnMateria(AMateria *);
			virtual AMateria *createMateria(std::string const &type);
	
};

#endif