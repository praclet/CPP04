/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:52:48 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 10:24:04 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		_tabMaterias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		_tabMaterias[i] = src._tabMaterias[i];
}

MateriaSource::~MateriaSource()
{
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		_tabMaterias[i] = src._tabMaterias[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* element)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		if (!_tabMaterias[i])
		{
			_tabMaterias[i] = element;
			break;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		if (_tabMaterias[i]->getType() == type)
			return (_tabMaterias[i]->clone());
	return (NULL);
}
