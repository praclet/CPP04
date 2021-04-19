/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadGuy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 08:33:22 by praclet           #+#    #+#             */
/*   Updated: 2021/04/19 08:36:23 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BADGUY_HPP
# define BADGUY_HPP

# include "Enemy.hpp"

class BadGuy : public Enemy
{
	public:
		BadGuy();
		BadGuy(BadGuy const & src);
		virtual ~BadGuy();
		BadGuy & operator = (BadGuy const & src);
};

#endif
