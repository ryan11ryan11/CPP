/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:29:20 by junhhong          #+#    #+#             */
/*   Updated: 2024/09/26 12:07:05 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout << this->_B_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
    this->_B_weapon = &weapon;
}

HumanB::HumanB(std::string name) : _name(name)
{
    
}

HumanB::~HumanB()
{
    
}