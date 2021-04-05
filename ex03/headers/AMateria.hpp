/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:20:22 by praclet           #+#    #+#             */
/*   Updated: 2021/04/05 15:44:23 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		unsigned int _xp;
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();
		AMateria & operator=(AMateria const & src);
		std::string const & getType(void) const;
		unsigned int getXP(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
