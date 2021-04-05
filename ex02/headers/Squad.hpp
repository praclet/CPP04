/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:17:18 by praclet           #+#    #+#             */
/*   Updated: 2021/04/05 11:05:19 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	protected:
		int	_nbUnits;
		ISpaceMarine	**_tabUnits;
		void _freeTab(void);
	public:
		Squad();
		Squad(Squad const & src);
		virtual ~Squad();
		Squad & operator= (Squad const & src);
		virtual int getCount(void) const;
		virtual ISpaceMarine* getUnit(int idx) const;
		virtual int push(ISpaceMarine* unit);
};

#endif
