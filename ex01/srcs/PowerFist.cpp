/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:03:50 by praclet           #+#    #+#             */
/*   Updated: 2021/04/16 16:58:18 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist()
	: AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(std::string const & name, int apCost, int damage)
	: AWeapon(name, apCost, damage)
{
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src)
{
}

PowerFist::~PowerFist()
{
}

PowerFist & PowerFist::operator = (PowerFist const & src)
{
	if (this == &src)
		return *this;
	this->AWeapon::operator=(src);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
