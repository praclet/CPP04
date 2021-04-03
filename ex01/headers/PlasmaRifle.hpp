/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:03:52 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 17:23:34 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(std::string const & name, int apCost, int damage);
		PlasmaRifle(PlasmaRifle const & src);
		virtual ~PlasmaRifle();
		PlasmaRifle & operator = (PlasmaRifle const & src);
		virtual void attack() const;
};

#endif
