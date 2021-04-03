/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:32:50 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 16:11:11 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string	_name;
		unsigned int _ap;
		AWeapon* _weapon;
		Character();
	public:
		Character(std::string const & name);
		Character(Character const & src);
		virtual ~Character();
		Character & operator = (Character const & src);
		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(Enemy* enemy);
		std::string const & getName(void) const;
		AWeapon const * getWeapon(void) const;
		unsigned int getAP(void) const;
};


std::ostream & operator << (std::ostream & os, Character const & character);

#endif
