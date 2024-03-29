/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spider.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 16:39:59 by praclet           #+#    #+#             */
/*   Updated: 2021/04/14 12:43:22 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPIDER_HPP
# define SPIDER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Spider : public Victim
{
	protected:
		Spider();
	public:
		Spider(std::string name);
		Spider(Spider const & src);
		virtual ~Spider();
		void getPolymorphed(void) const;
};

#endif
