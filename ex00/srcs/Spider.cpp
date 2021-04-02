/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spider.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 16:40:00 by praclet           #+#    #+#             */
/*   Updated: 2021/04/02 16:49:18 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Spider.hpp"

Spider::Spider(std::string name) : Victim(name)
{
	std::cout << "Screetch." << std::endl;
}

Spider::Spider(Spider const & src) : Victim(src)
{
	std::cout << "Screetch. " << std::endl;
}

Spider::~Spider()
{
	std::cout << "Sprotch. " << std::endl;
}

void Spider::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a heap of dust!" << std::endl;
}
