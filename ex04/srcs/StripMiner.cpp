/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:12:57 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 12:39:41 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::StripMiner(StripMiner const & src)
{
	(void)src;
}

StripMiner::~StripMiner()
{
}

StripMiner & StripMiner::operator= (StripMiner const & src)
{
	(void)src;
	return (*this);
}

void StripMiner::mine(IAsteroid* target)
{
	std::cout << "* strip mining... got " << target->beMined(this) << "! *"
		<< std::endl;
}
