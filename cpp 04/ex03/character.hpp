/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:04:53 by ansulist          #+#    #+#             */
/*   Updated: 2024/03/07 09:23:02 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "icharacter.hpp"
#include "amateria.hpp"

class Character : public ICharacter
{

private:
    AMateria *things[4];
    bool equipped[4];
    std::string name;
public:
    Character(void);
    Character(const std::string &name);
    Character(const Character &old);
    Character &operator=(const Character &rhs);
    ~Character(void);

    const std::string &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};
#endif