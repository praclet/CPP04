/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:54:26 by praclet           #+#    #+#             */
/*   Updated: 2021/04/09 08:56:32 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Victim.hpp"


Victim::Victim(std::string const & name) : _name(name)
{
	std::cout << "Some random victim called "
		<< _name << " just appeared!"
	   	<< std::endl;
}

Victim::Victim(Victim const & src) : _name(src._name)
{

	std::cout << _name << " is reborn!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name
		<< " just died for no apparent reason!" << std::endl;
}

Victim & Victim::operator = (Victim const & src)
{
	_name = src._name;
	std::cout << _name << ", is doubled!" << std::endl;
	return (*this);
}

void Victim::getPolymorphed(void) const
{
	std::cout << _name
		<< " has been turned into a cute little sheep!" << std::endl;
}

std::string const & Victim::getName(void) const
{
	return (_name);
}

std::ostream & operator << (std::ostream & os, Victim const & victim)
{
	std::cout << "I am " << victim.getName()
		<< " and I like otters!" << std::endl;
	return (os);
}
