/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:12:58 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 12:31:52 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class IAsteroid;

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner();
		DeepCoreMiner(DeepCoreMiner const & src);
		virtual ~DeepCoreMiner();
		DeepCoreMiner & operator= (DeepCoreMiner const & src);
		virtual void mine(IAsteroid* target);
};

#endif
