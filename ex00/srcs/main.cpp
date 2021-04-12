/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:35:30 by praclet           #+#    #+#             */
/*   Updated: 2021/04/12 12:10:28 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Spider.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << "----------" << std::endl;
	{
		Sorcerer rincer("Rincewind", "the noob");
		Spider spider("Tarentulla");

		std::cout << rincer << spider;
		rincer.polymorph(spider);
	}
	std::cout << "----------" << std::endl;
	{
		Victim joe("Joe");
		Victim joe2(joe);
		Victim joe3("Tmp");

		joe3 = joe;
		std::cout << joe << joe2 << joe3; 
	}
	std::cout << "----------" << std::endl;
	{
		Spider tarentulla("Tarentulla");
		Spider tarentulla2(tarentulla);
		Spider tarentulla3("Tmp");

		tarentulla3 = tarentulla;
		std::cout << tarentulla << tarentulla2 << tarentulla3;
	}
	std::cout << "----------" << std::endl;
	{
		Peon robert("Robert");
		Peon robert2(robert);
		Peon robert3("Tmp");

		robert3 = robert;
		std::cout << robert << robert2 << robert3;
	}
	std::cout << "----------" << std::endl;
	{
		Sorcerer merlin("Merlin","the Dummy");
		Sorcerer merlin2(merlin);
		Sorcerer merlin3("Tmp","the intern");

		merlin3 = merlin;
		std::cout << merlin << merlin2 << merlin3;
	}
	return 0;
}
