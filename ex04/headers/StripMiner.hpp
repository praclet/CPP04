/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:12:58 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 12:31:49 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class IAsteroid;

class StripMiner : public IMiningLaser
{
	public:
		StripMiner();
		StripMiner(StripMiner const & src);
		virtual ~StripMiner();
		StripMiner & operator= (StripMiner const & src);
		virtual void mine(IAsteroid* target);
};

#endif
