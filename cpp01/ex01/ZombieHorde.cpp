/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:08:16 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 18:02:40 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int	j;

	j = 0;
	if (N < 1)
	{
		std::cout << "WRONG NUMBER!" << std::endl;
		return (NULL);
	}
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].setIndex(j++);
	}
	return (horde);
}


void		Zombie::setName(std::string name)
{
	this->_name = name;
}

void		Zombie::setIndex(int index)
{
	this->_index = index;
}