/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:53:01 by praclet           #+#    #+#             */
/*   Updated: 2021/04/12 15:43:59 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << "---------" << std::endl;
	{
		Squad vlc;
		for (std::size_t i = 0;i < 6;i++)
		{
			vlc.push(new TacticalMarine);
			vlc.push(new AssaultTerminator);
		}
		for (int i = 0; i < vlc.getCount(); ++i)
		{
			ISpaceMarine* cur = vlc.getUnit(i);
			cur->meleeAttack();
			cur->battleCry();
			cur->rangedAttack();
		}
	}
	std::cout << "---------" << std::endl;
	{
		TacticalMarine obj0;
		TacticalMarine obj1(obj0);
		TacticalMarine obj2;

		obj2 = obj1;
	}
	std::cout << "---------" << std::endl;
	{
		AssaultTerminator obj0;
		AssaultTerminator obj1(obj0);
		AssaultTerminator obj2;

		obj2 = obj1;
	}
	std::cout << "---------" << std::endl;
	{
		Squad obj0;
		Squad obj1(obj0);
		Squad obj2;

		obj2 = obj1;
	}
	return 0;
}
