/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:51:35 by praclet           #+#    #+#             */
/*   Updated: 2021/04/07 10:27:45 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		static std::size_t const _nbMaxMaterias = 4;
		AMateria*	_tabMaterias[_nbMaxMaterias];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();
		virtual MateriaSource & operator=(MateriaSource const & src);
		virtual void learnMateria(AMateria* element);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
