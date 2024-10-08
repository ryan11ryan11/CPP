/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:34:08 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 16:44:47 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
#endif

class	Zombie
{
	private :
		std::string	_name;

	public :
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void);
		std::string	get_name(void);
		Zombie*		newZombie(std::string name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);