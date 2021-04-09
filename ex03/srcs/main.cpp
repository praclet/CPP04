/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:36:44 by praclet           #+#    #+#             */
/*   Updated: 2021/04/09 11:36:10 by praclet          ###   ########lyon.fr   */
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
	std::cout << "---------" << std::endl;
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

		toto.unequip(3);
		titi.unequip(2);
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
	return 0;
}
