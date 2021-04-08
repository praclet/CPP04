/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:53:01 by praclet           #+#    #+#             */
/*   Updated: 2021/04/08 16:01:16 by praclet          ###   ########lyon.fr   */
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
	return 0;
}
