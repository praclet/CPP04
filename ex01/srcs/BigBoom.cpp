/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigBoom.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 08:28:28 by praclet           #+#    #+#             */
/*   Updated: 2021/04/19 08:29:33 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "BigBoom.hpp"

BigBoom::BigBoom()
	: AWeapon("Big Boom", 10, 49)
{
}

BigBoom::BigBoom(std::string const & name, int apCost, int damage)
	: AWeapon(name, apCost, damage)
{
}

BigBoom::BigBoom(BigBoom const & src) : AWeapon(src)
{
}

BigBoom::~BigBoom()
{
}

BigBoom & BigBoom::operator = (BigBoom const & src)
{
	if (this == &src)
		return *this;
	this->AWeapon::operator=(src);
	return (*this);
}

void BigBoom::attack() const
{
	std::cout << "* BOOOOOOOM *" << std::endl;
}
