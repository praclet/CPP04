/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:11:36 by praclet           #+#    #+#             */
/*   Updated: 2021/04/16 17:04:46 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Comet.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

Comet::Comet()
{
}

Comet::Comet(Comet const &)
{
}

Comet::~Comet()
{
}

Comet const Comet::operator=(Comet const & src)
{
	(void)src;
	return (*this);
}

std::string Comet::beMined(StripMiner * miner) const
{
	(void)miner;
	return (std::string("Tartarite"));
}

std::string Comet::beMined(DeepCoreMiner * miner) const
{
	(void)miner;
	return (std::string("Meium"));
}

std::string Comet::getName() const
{
	return (std::string("Comet"));
}

