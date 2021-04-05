/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:46:47 by praclet           #+#    #+#             */
/*   Updated: 2021/04/05 11:49:25 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:
		int	_data;
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & src);
		virtual ~AssaultTerminator();
		AssaultTerminator & operator = (AssaultTerminator const & src);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif
