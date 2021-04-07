/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:40:53 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 13:06:30 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	protected:
		static std::size_t const _nbLasers;
		IMiningLaser * _tabLasers[_nbLasers];
	public:
		MiningBarge();
		MiningBarge(MiningBarge const & src);
		~MiningBarge();
		MiningBarge & operator=(MiningBarge const & src);
		void equip(IMiningLaser* miner);
		void mine(IAsteroid* asteroid) const;
};

#endif
