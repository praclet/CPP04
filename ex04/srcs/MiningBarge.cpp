/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:41:22 by praclet           #+#    #+#             */
/*   Updated: 2021/04/13 08:32:35 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	for (std::size_t i = 0;i < _nbLasers;i++)
		_tabLasers[i] = NULL;
}

MiningBarge::MiningBarge(MiningBarge const & src)
{
	for (std::size_t i = 0;i < _nbLasers;i++)
		_tabLasers[i] = src._tabLasers[i];
}

MiningBarge::~MiningBarge()
{
}

MiningBarge & MiningBarge::operator=(MiningBarge const & src)
{
	for (std::size_t i = 0;i < _nbLasers;i++)
		_tabLasers[i] = src._tabLasers[i];
	return (*this);
}

void MiningBarge::equip(IMiningLaser* miner)
{
	if (!miner)
		return ;
	for (std::size_t i = 0;i < _nbLasers;i++)
		if (!_tabLasers[i])
		{
			_tabLasers[i] = miner;
			break;
		}
		else
		{
			if (_tabLasers[i] == miner)
				return ;
		}
}

void MiningBarge::mine(IAsteroid* asteroid) const
{
	if (!asteroid)
		return ;
	for (std::size_t i = 0;i < _nbLasers;i++)
		if (_tabLasers[i])
			_tabLasers[i]->mine(asteroid);
}
