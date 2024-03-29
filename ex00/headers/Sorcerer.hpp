/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 09:10:15 by praclet           #+#    #+#             */
/*   Updated: 2021/04/14 12:43:09 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	protected:
		std::string	_name;
		std::string	_title;
		Sorcerer();
	public:
		Sorcerer(std::string const & name, std::string const & title);
		Sorcerer(Sorcerer const & src);
		virtual ~Sorcerer();
		Sorcerer & operator = (Sorcerer const & src);
		void polymorph(Victim const & victim) const;
		std::string const & getName(void) const;
		std::string const & getTitle(void) const;
};

std::ostream & operator << (std::ostream & os, Sorcerer const & sorcerer);

#endif
