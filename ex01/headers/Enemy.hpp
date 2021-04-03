/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:28:59 by praclet           #+#    #+#             */
/*   Updated: 2021/04/03 16:56:34 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
	protected:
		int	_hp;
		std::string _type;
		Enemy();
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		virtual ~Enemy();
		Enemy & operator = (Enemy const & src);
		std::string const & getType() const;
		int getHP() const;
		virtual void takeDamage(int amount);
};

#endif
