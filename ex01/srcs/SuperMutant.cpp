/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:41:39 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 16:50:31 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator = (SuperMutant const & src)
{
	this->Enemy::operator=(src);
	return (*this);
}

void SuperMutant::takeDamage(int amount)
{
	if (amount >= 3)
	{
		amount -= 3;
		if (amount < _hp)
			_hp -= amount;
		else
			_hp = 0;
	}
}
