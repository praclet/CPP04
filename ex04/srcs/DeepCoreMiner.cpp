/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:12:55 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 14:23:28 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & src)
{
	(void)src;
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner & DeepCoreMiner::operator= (DeepCoreMiner const & src)
{
	(void)src;
	return (*this);
}

void DeepCoreMiner::mine(IAsteroid* target)
{
	if (!target)
		return ;
	std::cout << "* mining deep... got " << target->beMined(this) << "! *"
		<< std::endl;
}
