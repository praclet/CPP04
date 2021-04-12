/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 09:58:54 by praclet           #+#    #+#             */
/*   Updated: 2021/04/12 15:30:45 by praclet          ###   ########lyon.fr   */
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
		toto.attack(&mechant);
		std::cout << toto;
		toto.recoverAP();
		std::cout << toto;
	}
	std::cout << "-----------" << std::endl;
	{
		Character titi("Titi");
		Character titi1(titi);
		Character titi2("");

		titi2 = titi;
		std::cout << titi << titi1 << titi2;
	}
	std::cout << "-----------" << std::endl;
	{
		Enemy mechant(50,"mechant");
		Enemy mechant1(mechant);
		Enemy mechant2(100,"tmp");

		mechant2 = mechant;
		std::cout << "mechant 0, type: " << mechant.getType() << ", "
			<< mechant.getHP() << " HP." << std::endl;
		std::cout << "mechant 1, type: " << mechant1.getType() << ", "
			<< mechant1.getHP() << " HP." << std::endl;
		std::cout << "mechant 2, type: " << mechant2.getType() << ", "
			<< mechant2.getHP() << " HP." << std::endl;
	}
	std::cout << "-----------" << std::endl;
	{
		PlasmaRifle boum("boum",5,10);
		PlasmaRifle boum1(boum);
		PlasmaRifle boum2("tmp",30,20);

		boum2 = boum;
		std::cout << "boum 0, name: " << boum.getName() << ", "
			<< boum.getAPCost() << " AP cost, " 
			<< boum.getDamage() << " damage." 
			<< std::endl;
		std::cout << "boum 1, name: " << boum1.getName() << ", "
			<< boum1.getAPCost() << " AP cost, "
			<< boum1.getDamage() << " damage." 
			<< std::endl;
		std::cout << "boum 2, name: " << boum2.getName() << ", "
			<< boum2.getAPCost() << " AP cost, "
			<< boum2.getDamage() << " damage." 
			<< std::endl;
	}
	std::cout << "-----------" << std::endl;
	{
		PowerFist paf("paf",50,40);
		PowerFist paf1(paf);
		PowerFist paf2("tmp",30,20);

		paf2 = paf;
		std::cout << "paf 0, name: " << paf.getName() << ", "
			<< paf.getAPCost() << " AP cost, " 
			<< paf.getDamage() << " damage." 
			<< std::endl;
		std::cout << "paf 1, name: " << paf1.getName() << ", "
			<< paf1.getAPCost() << " AP cost, "
			<< paf1.getDamage() << " damage." 
			<< std::endl;
		std::cout << "paf 2, name: " << paf2.getName() << ", "
			<< paf2.getAPCost() << " AP cost, "
			<< paf2.getDamage() << " damage." 
			<< std::endl;
	}
	std::cout << "-----------" << std::endl;
	{
		RadScorpion scorpio;
		RadScorpion scorpio1(scorpio);
		RadScorpion scorpio2;

		scorpio2 = scorpio;
		std::cout << "scorpio 0, type: " << scorpio.getType() << ", "
			<< scorpio.getHP() << " HP." << std::endl;
		std::cout << "scorpio 1, type: " << scorpio1.getType() << ", "
			<< scorpio1.getHP() << " HP." << std::endl;
		std::cout << "scorpio 2, type: " << scorpio2.getType() << ", "
			<< scorpio2.getHP() << " HP." << std::endl;
	}
	std::cout << "-----------" << std::endl;
	{
		SuperMutant bigbill;
		SuperMutant bigbill1(bigbill);
		SuperMutant bigbill2;

		bigbill2 = bigbill;
		std::cout << "bigbill 0, type: " << bigbill.getType() << ", "
			<< bigbill.getHP() << " HP." << std::endl;
		std::cout << "bigbill 1, type: " << bigbill1.getType() << ", "
			<< bigbill1.getHP() << " HP." << std::endl;
		std::cout << "bigbill 2, type: " << bigbill2.getType() << ", "
			<< bigbill2.getHP() << " HP." << std::endl;
	}
	return 0;
}
