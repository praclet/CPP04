/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:54:30 by praclet           #+#    #+#             */
/*   Updated: 2021/04/05 17:11:56 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Character.hpp"

void Character::_freeTab(void)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		if (_tabMaterias[i])
			delete _tabMaterias[i];
}

Character::Character() : _name("")
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		_tabMaterias[i] = NULL;
}

Character::Character(Character const & src) : _name(src._name)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
	{
		if (src._tabMaterias[i])
			_tabMaterias[i] = src._tabMaterias[i]->clone();
		else
			_tabMaterias[i] = NULL;
	}
}

Character::~Character()
{
	_freeTab();
}

Character & Character::operator= (Character const & src)
{
	_freeTab();
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
	{
		if (src._tabMaterias[i])
			_tabMaterias[i] = src._tabMaterias[i]->clone();
		else
			_tabMaterias[i] = NULL;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	std::size_t pos = -1;
	for (std::size_t i = 0;i < _nbMaxMaterias;i++)
	{
		if (_tabMaterias[i])
		{
			if (_tabMaterias[i] == m)
				return ;
		}
		else
		{
			if (pos != -1)
				pos = i;
		}
	}
	if (pos != -1)
		_tabMaterias[pos] = m;
}

void Character::unequip(int idx)
{
	if (_tabMaterias[idx])
	{
		delete _tabMaterias[idx];
		_tabMaterias[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	;
}

