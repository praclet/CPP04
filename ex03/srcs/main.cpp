/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:36:44 by praclet           #+#    #+#             */
/*   Updated: 2021/04/18 09:14:23 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void blabla(AMateria const & materia)
{
	std::cout << "Materia (type: " << materia.getType() << ") has "
		<< materia.getXP() << " XP." << std::endl;
}

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << "---------" << __LINE__ << std::endl;
	{
		Character toto("Toto");
		Character titi("Titi");
		AMateria *ice1=new Ice();
		AMateria *cure1=new Cure();
		MateriaSource src;
		
		src.learnMateria(ice1->clone());
		src.learnMateria(cure1->clone());
		src.learnMateria(ice1->clone());
		
		AMateria *ice2=src.createMateria("ice");
		AMateria *cure2=src.createMateria("cure");
		AMateria *ice3=src.createMateria("ice");
		AMateria *cure3=src.createMateria("cure");
		AMateria *ice4=src.createMateria("ice");
		AMateria *cure4=src.createMateria("cure");
		AMateria *ice5=src.createMateria("ice");
		AMateria *cure5=src.createMateria("cure");

		toto.equip(ice1);
		toto.equip(ice2);
		toto.equip(ice3);
		toto.equip(ice4);
		toto.equip(ice5);
		titi.equip(cure1);
		titi.equip(cure2);
		titi.equip(cure3);
		titi.equip(cure4);
		titi.equip(cure5);
		delete ice5;
		delete cure5;
		
		toto.unequip(3);
		delete ice4;
		titi.unequip(2);
		delete cure3;
		titi.unequip(2);
		toto.unequip(13);
		toto.use(3, titi);
		titi.use(2, toto);

		blabla(*cure1);
		titi.use(0, toto);
		blabla(*cure1);
		std::cout << "---" << std::endl;
		blabla(*ice2);
		toto.use(1, titi);
		blabla(*ice2);
		std::cout << "---" << std::endl;
		blabla(*cure1);
		titi.use(0, titi);
		blabla(*cure1);
		
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Character obj("Toto");
		Character obj1(obj);
		Character obj2;

		obj2=obj;
		std::cout << obj.getName() << " "
			<< obj1.getName() << " "
			<< obj2.getName() << " " << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Character bob("Bob");
		Cure obj;
		obj.use(bob);
		Cure obj1(obj);
		Cure obj2;

		obj2=obj;
		std::cout << obj.getType() << " "
			<< obj1.getType() << " "
			<< obj2.getType() << " " << std::endl;
		std::cout << obj.getXP() << " "
			<< obj1.getXP() << " "
			<< obj2.getXP() << " " << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		Character bob("Bob");
		Ice obj;
		obj.use(bob);
		Ice obj1(obj);
		Ice obj2;

		obj2=obj;
		std::cout << obj.getType() << " "
			<< obj1.getType() << " "
			<< obj2.getType() << " " << std::endl;
		std::cout << obj.getXP() << " "
			<< obj1.getXP() << " "
			<< obj2.getXP() << " " << std::endl;
	}
	std::cout << "--------- " << __LINE__ << std::endl;
	{
		MateriaSource obj;
		MateriaSource obj1(obj);
		MateriaSource obj2;

		obj2=obj;
	}
	return 0;
}
