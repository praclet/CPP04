/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 09:12:52 by praclet           #+#    #+#             */
/*   Updated: 2021/04/02 14:59:58 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"


Sorcerer::Sorcerer(std::string name, std::string title)
	: _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) : _name(src._name), _title(src._title)
{

	std::cout << _name << ", " << _title << ", is reborn!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title
		<< ", is dead. Consequences will never be the same!"
	   	<< std::endl;
}

Sorcerer & Sorcerer::operator = (Sorcerer const & src)
{
	_name = src._name;
	_title = src._title;
	std::cout << _name << ", " << _title << ", is doubled!" << std::endl;
	return (*this);
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::string const & Sorcerer::getName(void) const
{
	return (_name);
}

std::string const & Sorcerer::getTitle(void) const
{
	return (_title);
}

std::ostream & operator << (std::ostream & os, Sorcerer const & sorcerer)
{
	std::cout << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
		<< " and I like ponies!" << std::endl;
	return (os);
}
