/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:28:48 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 17:24:33 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Enemy.hpp"

Enemy::Enemy() : _hp(0), _type("")
{
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const & src) : _hp(src._hp), _type(src._type)
{
}

Enemy::~Enemy()
{
}

Enemy & Enemy::operator = (Enemy const & src)
{
	_hp = src._hp;
	_type = src._type;
	return (*this);
}

std::string const & Enemy::getType() const
{
	return (_type);
}

int Enemy::getHP() const
{
	return (_hp);
}

void Enemy::takeDamage(int amount)
{
	if (amount > 0)
	{
		if (amount < _hp)
			_hp -= amount;
		else
			_hp = 0;
	}
}
