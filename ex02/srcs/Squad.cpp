/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:35:48 by praclet           #+#    #+#             */
/*   Updated: 2021/04/05 13:13:35 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
# include "Squad.hpp"
# include "ISquad.hpp"

void Squad::_freeTab(void)
{
	for (int i = 0;i < _nbUnits;i++)
		delete _tabUnits[i];
	delete [] _tabUnits;
	_nbUnits = 0;
	_tabUnits = NULL;
}

Squad::Squad() : _nbUnits(0), _tabUnits(NULL)
{
}

Squad::Squad(Squad const & src) : _nbUnits(src._nbUnits), _tabUnits(NULL)
{
	if (_nbUnits <= 0)
		return ;
	_tabUnits = new ISpaceMarine*[_nbUnits];
	for (int i = 0;i < _nbUnits;i++)
		_tabUnits[i] = src.getUnit(i)->clone();
}

Squad::~Squad()
{
	_freeTab();
}

Squad & Squad::operator= (Squad const & src)
{
	_freeTab();
	_nbUnits = src._nbUnits;
	if (_nbUnits > 0)
	{
		_tabUnits = new ISpaceMarine*[_nbUnits];
		for (int i = 0;i < _nbUnits;i++)
			_tabUnits[i] = src.getUnit(i)->clone();
	}
	return (*this);
}

int Squad::getCount(void) const
{
	return (_nbUnits);
}

ISpaceMarine* Squad::getUnit(int idx) const
{
	if (idx < 0 || idx >= _nbUnits)
		return (NULL);
	return (_tabUnits[idx]);
}

int Squad::push(ISpaceMarine* unit)
{
	if (unit)
	{
		int i = 0;

		for (i = 0; i < _nbUnits;i++)
		{
			if (_tabUnits[i] == unit)
				break;
		}
		if (i >= _nbUnits)
		{
			ISpaceMarine **newTabUnits = new ISpaceMarine*[_nbUnits + 1];

			for (i = 0; i < _nbUnits;i++)
				newTabUnits[i] = _tabUnits[i];
			newTabUnits[_nbUnits++] = unit;
			delete [] _tabUnits;
			_tabUnits = newTabUnits;
		}
	}
	return (_nbUnits);
}
