/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:59:58 by praclet           #+#    #+#             */
/*   Updated: 2021/04/14 12:43:31 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
	protected:
		std::string	_name;
		Victim();
	public:
		Victim(std::string const & name);
		Victim(Victim const & src);
		virtual ~Victim();
		Victim & operator = (Victim const & src);
		virtual void getPolymorphed(void) const;
		std::string const & getName(void) const;
};

std::ostream & operator << (std::ostream & os, Victim const & victim);

#endif
