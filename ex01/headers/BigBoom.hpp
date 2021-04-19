/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigBoom.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 08:25:35 by praclet           #+#    #+#             */
/*   Updated: 2021/04/19 08:26:40 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGBOOM_HPP
# define BIGBOOM_HPP

# include <string>
# include "AWeapon.hpp"

class BigBoom : public AWeapon
{
	public:
		BigBoom();
		BigBoom(std::string const & name, int apCost, int damage);
		BigBoom(BigBoom const & src);
		virtual ~BigBoom();
		BigBoom & operator = (BigBoom const & src);
		virtual void attack() const;
};

#endif
