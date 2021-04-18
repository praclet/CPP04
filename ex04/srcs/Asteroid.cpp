/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:01:16 by praclet           #+#    #+#             */
/*   Updated: 2021/04/16 17:04:55 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Asteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

Asteroid::Asteroid()
{
}

Asteroid::Asteroid(Asteroid const &)
{
}

Asteroid::~Asteroid()
{
}

Asteroid const Asteroid::operator=(Asteroid const & src)
{
	(void)src;
	return (*this);
}

std::string Asteroid::beMined(StripMiner * miner) const
{
	(void)miner;
	return (std::string("Flavium"));
}

std::string Asteroid::beMined(DeepCoreMiner * miner) const
{
	(void)miner;
	return (std::string("Dragonite"));
}

std::string Asteroid::getName() const
{
	return (std::string("Asteroid"));
}

