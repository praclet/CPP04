/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:03:50 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 17:18:03 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
	: AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apCost, int damage)
	: AWeapon(name, apCost, damage)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle & PlasmaRifle::operator = (PlasmaRifle const & src)
{
	this->AWeapon::operator=(src);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
