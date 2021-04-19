/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadGuy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 08:33:23 by praclet           #+#    #+#             */
/*   Updated: 2021/04/19 08:41:06 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"
#include "BadGuy.hpp"

BadGuy::BadGuy() : Enemy(100, "BadGuy")
{
	std::cout << "* The vilain apears on the screen. *" << std::endl;
}

BadGuy::BadGuy(BadGuy const & src) : Enemy(src)
{
	std::cout << "* The vilain apears on the screen. *" << std::endl;
}

BadGuy::~BadGuy()
{
	std::cout << "* The vilain dies in an explosion. *" << std::endl;
}

BadGuy & BadGuy::operator = (BadGuy const & src)
{
	if (this == &src)
		return *this;
	this->Enemy::operator=(src);
	return (*this);
}
