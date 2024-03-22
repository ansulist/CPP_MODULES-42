/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imateriasource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:23:35 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 09:23:55 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H
# include "amateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria *) = 0;
        virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif