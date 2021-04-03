/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:03:39 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 12:26:19 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{
	protected:
		std::string		_name;
		int	_apCost;
		int	_damage;
		AWeapon();
	public:
		AWeapon(std::string const & name, int apCost, int damage);
		AWeapon(AWeapon const & src);
		virtual ~AWeapon();
		AWeapon & operator = (AWeapon const & src);
		std::string const & getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
