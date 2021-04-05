/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:54:23 by praclet           #+#    #+#             */
/*   Updated: 2021/04/05 17:11:48 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		static std::size_t const _nbMaxMaterias = 4;
		AMateria * _tabMaterias[_nbMaxMaterias];
		std::string _name;
		void _freeTab(void);
	public:
		Character();
		Character(Character const & src);
		virtual ~Character();
		Character & operator= (Character const & src);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
/*
The Character possesses an inventory of 4 Materia at most, empty at start. He’ll
equip the Materia in slots 0 to 3, in this order.
In case we try to equip a Materia in a full inventory, or use/uneqip a nonexistent
Materia, don’t do a thing.
The unequip method must NOT delete Materia!
The use(int, ICharacter&) method will have to use the Materia at the idx slot,
and pass target as parameter to the AMateria::use method.
18
C++ - Module 04 Subtype polymorphism, abstract classes, interfaces
Of course, you’ll have to be able to support ANY AMateria in a
Character’s inventory.
Your Character must have a constructor taking its name as parameter. Copy or
assignation of a Character must be deep, of course. The old Materia of a Character
must be deleted. Same upon destruction of a Character .
Now that your characters can equip and use Materia, it’s starting to look right.
*/
