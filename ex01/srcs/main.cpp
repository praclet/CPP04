/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 09:58:54 by praclet           #+#    #+#             */
/*   Updated: 2021/04/08 15:20:25 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	{
		Character* me = new Character("me");
		std::cout << *me;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		delete	me;
		delete	pr;
		delete	pf;
	}
	std::cout << "-----------" << std::endl;
	{
		Character toto("Toto");
		std::cout << toto;
		SuperMutant mechant;
		PlasmaRifle boum;
		toto.equip(&boum);
		std::cout << toto;
		toto.attack(&mechant);
		std::cout << toto;
	}
	return 0;
}
