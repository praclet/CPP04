/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:32:38 by praclet           #+#    #+#             */
/*   Updated: 2021/04/09 09:23:16 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"

Character::Character() : _name(""), _ap(40), _weapon(NULL)
{
}

Character::Character(std::string const & name)
	: _name(name), _ap(40), _weapon(NULL)
{
}

Character::Character(Character const & src)
	: _name(src._name), _ap(src._ap), _weapon(src._weapon)
{
}

Character::~Character()
{
}

Character & Character::operator = (Character const & src)
{
	_name = src._name;
	_ap = src._ap;
	_weapon = src._weapon;
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

unsigned int Character::getAP() const
{
	return (_ap);;
}

AWeapon const * Character::getWeapon() const
{
	return (_weapon);
}

void Character::recoverAP()
{
	if (_ap < (40 - 10))
		_ap += 10;
	else
		_ap = 40;
}

void Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (!_weapon || !enemy)
		return ;

	int amount = _weapon->getAPCost();
	if (amount > 0)
	{
		if ((unsigned int)amount > _ap)
		{
			std::cout << _name << " can't attack with a "
				<< _weapon->getName() << std::endl;
			return ;
		}
		if ((unsigned int)amount < _ap)
			_ap -= (unsigned int)amount;
		else
			_ap = 0;
	}
	
	std::cout << _name << " attacks " << enemy->getType()
		<< " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::ostream & operator << (std::ostream & os, Character const & character)
{
	AWeapon const *tmp = character.getWeapon();

	os << character.getName() << " has "
		<< character.getAP() << " AP and ";
	if (tmp)
		os << "wields a " << tmp->getName();
	else
		os << "is unarmed";
	os << std::endl;
	return (os);
}
