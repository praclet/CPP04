/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comet.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:09:22 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 13:54:07 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMET_HPP
# define COMET_HPP

# include <string>
# include "IAsteroid.hpp"
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class Comet : public IAsteroid
{
	public:
		Comet();
		Comet(Comet const &);
		virtual ~Comet();
		virtual Comet const operator=(Comet const &);
		virtual std::string beMined(StripMiner *miner) const;
		virtual std::string beMined(DeepCoreMiner *miner) const;
		virtual std::string getName() const;
};

#endif
