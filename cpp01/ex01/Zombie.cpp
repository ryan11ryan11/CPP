/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:33:54 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 18:08:58 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::get_name(void)
{
	return (this->_name);
}

int	Zombie::getIndex(void)
{
	return (this->_index);
}


void	Zombie::announce(void)
{
	std::cout << "index : "<< this->_index << " " << get_name() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << name << " is created" << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	
}