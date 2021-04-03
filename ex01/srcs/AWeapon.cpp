/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:14:47 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 17:25:13 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(""), _apCost(0), _damage(0)
{
}

AWeapon::AWeapon(std::string const & name, int apCost, int damage)
	: _name(name), _apCost(apCost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const & src)
	: _name(src._name), _apCost(src._apCost), _damage(src._damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon & AWeapon::operator = (AWeapon const & src)
{
	_name = src._name;
	_apCost = src._apCost;
	_damage = src._damage;
	return (*this);
}

std::string const & AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_apCost);;
}

int AWeapon::getDamage() const
{
	return (_damage);
}
