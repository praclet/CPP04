/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:40:53 by praclet           #+#    #+#             */
/*   Updated: 2021/04/14 12:45:28 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class MiningBarge
{
	protected:
		static std::size_t const _nbLasers = 4;
		IMiningLaser * _tabLasers[_nbLasers];
	public:
		MiningBarge();
		MiningBarge(MiningBarge const & src);
		virtual ~MiningBarge();
		MiningBarge & operator=(MiningBarge const & src);
		void equip(IMiningLaser* miner);
		void mine(IAsteroid* asteroid) const;
};

#endif
