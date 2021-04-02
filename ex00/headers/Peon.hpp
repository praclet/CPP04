/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:22:19 by praclet           #+#    #+#             */
/*   Updated: 2021/04/02 13:27:00 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	protected:
		Peon();
	public:
		Peon(std::string name);
		Peon(Peon const & src);
		~Peon();
		void getPolymorphed(void) const;
};

#endif
