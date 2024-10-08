/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:33:54 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/25 18:06:46 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::get_name(void)
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << get_name() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string zombieName) : _name(zombieName)
{
	std::cout << this->_name << " created" << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed" << std::endl; 
}