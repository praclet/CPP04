/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:47:25 by praclet           #+#    #+#             */
/*   Updated: 2021/04/16 17:02:20 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() : _data(0)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) : _data(src._data)
{
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator = (AssaultTerminator const & src)
{
	if (this == &src)
		return (*this);
	_data = src._data;
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
