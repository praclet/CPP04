/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:35:09 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 12:32:57 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class StripMiner;
class DeepCoreMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(StripMiner *) const = 0;
		virtual std::string beMined(DeepCoreMiner *) const = 0;
		virtual std::string getName() const = 0;
};

#endif
