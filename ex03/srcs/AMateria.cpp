/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:56:11 by praclet           #+#    #+#             */
/*   Updated: 2021/04/05 15:38:24 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), _type("")
{
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
}

AMateria::AMateria(AMateria const & src) : _xp(src._xp), _type(src._type)
{
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator=(AMateria const & src)
{
	_xp = src._xp;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (_type);
}

unsigned int AMateria::getXP(void) const
{
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	_xp += 10;
}
