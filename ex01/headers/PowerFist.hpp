/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:03:52 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 17:23:24 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(std::string const & name, int apCost, int damage);
		PowerFist(PowerFist const & src);
		virtual ~PowerFist();
		PowerFist & operator = (PowerFist const & src);
		virtual void attack() const;
};

#endif
