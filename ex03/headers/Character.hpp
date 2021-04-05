/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:54:23 by praclet           #+#    #+#             */
/*   Updated: 2021/04/05 17:30:38 by praclet          ###   ########lyon.fr   */
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
		Character(std::string const & name = "");
		Character(Character const & src);
		virtual ~Character();
		Character & operator= (Character const & src);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
