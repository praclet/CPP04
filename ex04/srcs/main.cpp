/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:41:29 by praclet           #+#    #+#             */
/*   Updated: 2021/04/13 08:27:12 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Asteroid.hpp"
#include "Comet.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"

int main(void)
{
	{
		Asteroid asteroid[3];
		Comet comet[3];
		DeepCoreMiner DCMiner[3];
		MiningBarge barge[3];
		StripMiner SMiner[3];


		SMiner[1].mine(&asteroid[2]);
		SMiner[1].mine(&comet[2]);
		SMiner[1].mine(NULL);
		DCMiner[1].mine(&asteroid[2]);
		DCMiner[1].mine(&comet[2]);
		DCMiner[1].mine(NULL);
		std::cout << "* -------" << std::endl;
		barge[0].equip(&SMiner[0]);
		barge[0].mine(NULL);
		barge[0].mine(&comet[2]);
		std::cout << "* -------" << std::endl;
		barge[1].equip(&DCMiner[0]);
		barge[1].equip(&DCMiner[0]);
		barge[1].mine(&asteroid[2]);
		std::cout << "* -------" << std::endl;
		barge[2].equip(NULL);
		barge[2].equip(&SMiner[0]);
		barge[2].equip(&DCMiner[0]);
		barge[2].equip(&SMiner[1]);
		barge[2].equip(&DCMiner[1]);
		barge[2].equip(&SMiner[2]);
		barge[2].mine(&comet[2]);
		barge[2].mine(&asteroid[2]);
	}
	std::cout << "*******" << std::endl;
	{
		Asteroid obj;
		Asteroid obj1(obj);
		Asteroid obj2;

		obj2 = obj;
	}
	std::cout << "*******" << std::endl;
	{
		Comet obj;
		Comet obj1(obj);
		Comet obj2;

		obj2 = obj;
	}
	std::cout << "*******" << std::endl;
	{
		DeepCoreMiner obj;
		DeepCoreMiner obj1(obj);
		DeepCoreMiner obj2;

		obj2 = obj;
	}
	std::cout << "*******" << std::endl;
	{
		MiningBarge obj;
		MiningBarge obj1(obj);
		MiningBarge obj2;

		obj2 = obj;
	}
	std::cout << "*******" << std::endl;
	{
		StripMiner obj;
		StripMiner obj1(obj);
		StripMiner obj2;

		obj2 = obj;
	}
	return (0);
}
