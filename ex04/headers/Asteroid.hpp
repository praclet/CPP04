/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:54:23 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 12:35:29 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include <string>
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class Asteroid
{
	public:
		Asteroid();
		Asteroid(Asteroid const &);
		virtual ~Asteroid();
		virtual Asteroid const operator=(Asteroid const & src);
		virtual std::string beMined(StripMiner * miner) const;
		virtual std::string beMined(DeepCoreMiner * miner) const;
		virtual std::string getName() const;
};

#endif
