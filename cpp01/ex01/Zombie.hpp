/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:34:08 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 18:08:27 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
#endif

class	Zombie
{
	public :
		std::string	get_name(void);
		void		announce();
		void		setName(std::string);
		void		setIndex(int);
		int			getIndex();
		Zombie();
		Zombie(std::string name);
		~Zombie();
	private :
		std::string	_name;
		int			_index;
};

Zombie* zombieHorde(int N, std::string name);
